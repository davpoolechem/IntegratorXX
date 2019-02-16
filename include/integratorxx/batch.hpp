#ifndef __INCLUDED_INTEGRATORXX_BATCH_HPP__
#define __INCLUDED_INTEGRATORXX_BATCH_HPP__

#include <iterator>

#include "quadrature.hpp"

namespace IntegratorXX {

  template <typename QuadratureType>
  class QuadratureBatch {

    const QuadratureType& quad; ///< Base quadrature
    const size_t          batch_sz; ///< Batch size

    class iterator {

      using point_type  = typename QuadratureType::point_type;
      using weight_type = typename QuadratureType::weight_type;
      using point_container  = typename QuadratureType::point_container;
      using weight_container = typename QuadratureType::weight_container;

      const QuadratureType* quad; ///< Base quadrature

      size_t cur_indx;
      size_t batch_sz;

    public:

      using value_type  = 
        std::tuple< point_container, weight_container >;
      using pointer           = const value_type*;
      using reference         = value_type&&;
      using difference_type   = size_t;
      using iterator_catagory = std::forward_iterator_tag;
      
      iterator() = delete;

      iterator( 
        const QuadratureType &q, 
        const size_t indx,
        const size_t bsz = 1 
      ) : quad(&q), cur_indx(indx), batch_sz(bsz) { }

      iterator& operator++(){ cur_indx += std::min(batch_sz,quad->nPts()-cur_indx); return *this; }
      iterator  operator++(int){ iterator retval = *this; ++(*this); return retval; }


      iterator& operator+(int i){
        cur_indx = std::min( cur_indx + i*batch_sz, quad->nPts() );
        return *this;
      }

      // TODO, check that quads are the same through hash
      bool operator==(iterator other){ return cur_indx == other.cur_indx and quad == other.quad; }
      bool operator!=(iterator other){ return not (*this == other); }

      auto range() {
      
        size_t ncpy = 
          std::min(batch_sz, quad->nPts() - cur_indx);

        auto pts_st = quad->points().begin() + cur_indx;
        auto pts_en = pts_st + ncpy;

        auto wgt_st = quad->weights().begin() + cur_indx;
        auto wgt_en = wgt_st + ncpy;

        return std::tuple( pts_st, pts_en, wgt_st, wgt_en );
                 
      }

      auto operator*(){ 

        size_t ncpy = 
          std::min(batch_sz, quad->nPts() - cur_indx);

        point_container  pts( ncpy );
        weight_container wgt( ncpy );

        std::copy( quad->points().begin() + cur_indx,
                   quad->points().begin() + cur_indx + ncpy,
                   pts.begin() );

        std::copy( quad->weights().begin() + cur_indx,
                   quad->weights().begin() + cur_indx + ncpy,
                   wgt.begin() );

        return std::tuple( std::move(pts),std::move(wgt) ); 

      }

    };

  public:

    using point_type  = typename QuadratureType::point_type;
    using weight_type = typename QuadratureType::weight_type;
    using point_container = 
      typename QuadratureType::point_container;
    using weight_container = 
      typename QuadratureType::weight_container;

    QuadratureBatch( 
      const QuadratureType &q, 
      const size_t bsz = 1  
    ): batch_sz(bsz), quad(q){ };


    iterator begin() const { return iterator(quad,0, batch_sz); }
    iterator end() const {   return iterator(quad,quad.nPts(),batch_sz); }

    inline size_t n_batches() const {
      if( batch_sz > quad.nPts() ) return 1;

      size_t n = quad.nPts() / batch_sz;
      if( quad.nPts() % batch_sz ) n++;
      return n;
    }

    inline size_t max_batch_size() const {
      return batch_sz;
    }

  };






  namespace detail{
  struct standard_combine_op {
    template <typename T, typename U, typename V>
    static T combine( const U& u, const V& v ) {
      return {u,v};
    }
  };
  }




  template <typename CombinedType, typename QuadratureType1, typename QuadratureType2,
            typename CombineOp = detail::standard_combine_op >
  class QuadratureBatch2D_t {


    using batch_iterator_1 =
      decltype( std::declval<QuadratureBatch<QuadratureType1>>().begin() );
    using batch_iterator_2 =
      decltype( std::declval<QuadratureBatch<QuadratureType2>>().begin() );




    const QuadratureBatch<QuadratureType1> q_batch_1;
    const QuadratureBatch<QuadratureType2> q_batch_2;

    const size_t batch_sz_1;
    const size_t batch_sz_2;


    class iterator {

      using batch_iterator_1 = 
        typename QuadratureBatch2D_t::batch_iterator_1;
      using batch_iterator_2 = 
        typename QuadratureBatch2D_t::batch_iterator_2;

      using weight_type = 
        decltype( 
          std::declval<typename QuadratureType1::weight_type>() *
          std::declval<typename QuadratureType2::weight_type>()
        );

      using weight_container = typename QuadratureType1::weight_container;
      using point_container  = std::vector<CombinedType>;

      const QuadratureBatch<QuadratureType1>& q_batch_1;
      const QuadratureBatch<QuadratureType2>& q_batch_2;

      size_t cur_indx;
      batch_iterator_1 it_1;
      batch_iterator_2 it_2;

    public:

      using value_type = 
        std::tuple< CombinedType, weight_container >;
      using pointer           = const value_type*;
      using reference         = value_type&&;
      using difference_type   = size_t;
      using iterator_catagory = std::forward_iterator_tag;

      iterator() = delete;

      iterator( 
        const decltype(q_batch_1)& q1,
        const decltype(q_batch_2)& q2,
        const size_t i1,
        const size_t i2
      ) :
        q_batch_1(q1), q_batch_2(q2),
        // Col major ordering of cartesian product
        cur_indx( i1 + i2*q1.n_batches() ),
        it_1( q1.begin() + i1 ),
        it_2( q2.begin() + i2 ){ }


      iterator& operator++(){ 
        it_1++;
        if( it_1 == q_batch_1.end() ) {
          it_1 = q_batch_1.begin();
          it_2++;
        }

        return *this;
      }
      iterator  operator++(int){ iterator retval = *this; ++(*this); return retval; }


      // TODO, check that quads are the same through hash
      bool operator==(iterator other){ return it_1 == other.it_1 and it_2 == other.it_2; }
      bool operator!=(iterator other){ return not (*this == other); }

      auto operator*(){ 

        auto [pts1_st, pts1_en, wgt1_st, wgt1_en] = it_1.range();
        auto [pts2_st, pts2_en, wgt2_st, wgt2_en] = it_2.range();

        auto ncpy_1 = std::distance( pts1_st, pts1_en );
        auto ncpy_2 = std::distance( pts2_st, pts2_en );

        point_container  pts( ncpy_1 * ncpy_2 );
        weight_container wgt( ncpy_1 * ncpy_2 );


        auto pts_loop_init = std::tuple(pts2_st, pts.begin());
        for(auto [i2, indx] = pts_loop_init; i2 != pts2_en; ++i2        )
        for(auto i1 = pts1_st;               i1 != pts1_en; ++i1, ++indx)
          //*indx = { *i1, *i2 };
          *indx = CombineOp::template combine<CombinedType>( *i1, *i2 );

        auto wgt_loop_init = std::tuple(wgt2_st, wgt.begin());
        for(auto [i2, indx] = wgt_loop_init; i2 != wgt2_en; ++i2        )
        for(auto i1 = wgt1_st;               i1 != wgt1_en; ++i1, ++indx)
          *indx = (*i1) * (*i2);

        return std::tuple( std::move(pts),std::move(wgt) ); 

      }
    };
    

  public:

    QuadratureBatch2D_t(
      const QuadratureType1& q1,
      const QuadratureType2& q2,
      const size_t bsz1,
      const size_t bsz2
    ) : q_batch_1(q1,bsz1), q_batch_2(q2,bsz2),
        batch_sz_1(bsz1), batch_sz_2(bsz2) { }


    iterator begin(){ return iterator(q_batch_1, q_batch_2,0,0); }
    iterator end(){ return iterator(q_batch_1, q_batch_2, 0, q_batch_2.n_batches() ); }

    inline size_t n_batches() const {
      return q_batch_1.n_batches() * q_batch_2.n_batches();
    }

    inline size_t max_batch_size() const {
      return q_batch_1.max_batch_size() *
             q_batch_2.max_batch_size();
    }

  };

  template <typename CombinedType, typename QuadratureType1, typename QuadratureType2,
            typename CombineOp = detail::standard_combine_op >
  QuadratureBatch2D_t<CombinedType, QuadratureType1, QuadratureType2, CombineOp>
  QuadratureBatch2D(
    const QuadratureType1& q1,
    const QuadratureType2& q2,
    const size_t bsz1 = 1,
    const size_t bsz2 = 1
  ) {

    return QuadratureBatch2D_t<CombinedType, QuadratureType1, QuadratureType2, CombineOp>(q1,q2,bsz1,bsz2);

  }

};

#endif
