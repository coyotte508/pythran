#ifndef PYTHONIC_INCLUDE_OPERATOR_MUL_HPP
#define PYTHONIC_INCLUDE_OPERATOR_MUL_HPP

#include "pythonic/utils/proxy.hpp"
#include "pythonic/operator_/overloads.hpp"
#ifdef USE_BOOST_SIMD
#include <nt2/include/functions/multiplies.hpp>
#endif

namespace pythonic {

    namespace operator_ {

        template <class A, class B>
            auto mul(A const& a, B const& b) -> decltype(a*b);

        PROXY_DECL(pythonic::operator_, mul);
    }

}

#endif
