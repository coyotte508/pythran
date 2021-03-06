#ifndef PYTHONIC_OPERATOR_GT_HPP
#define PYTHONIC_OPERATOR_GT_HPP

#include "pythran/pythonic/include/operator_/gt.hpp"

#include "pythonic/utils/proxy.hpp"

namespace pythonic {

    namespace operator_ {
        template <class A, class B>
            auto gt(A const& a, B const& b) -> decltype(a>b)
            {
                return a>b;
            }

        PROXY_IMPL(pythonic::operator_, gt);

    }

}

#endif
