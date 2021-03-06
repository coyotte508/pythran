#ifndef PYTHONIC_OPERATOR_AND_HPP
#define PYTHONIC_OPERATOR_AND_HPP

#include "pythonic/include/operator_/and_.hpp"

#include "pythonic/utils/proxy.hpp"

namespace pythonic {

    namespace operator_ {
        template <class A, class B>
            auto and_(A const& a, B const& b) -> decltype(a & b)
            {
                return a&b;
            }

        PROXY_IMPL(pythonic::operator_, and_);

    }

}

#endif
