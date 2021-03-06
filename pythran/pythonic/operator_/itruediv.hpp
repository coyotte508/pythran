#ifndef PYTHONIC_OPERATOR_ITRUEDIV_HPP
#define PYTHONIC_OPERATOR_ITRUEDIV_HPP

#include "pythran/pythonic/include/operator_/itruediv.hpp"

#include "pythonic/utils/proxy.hpp"
#include "pythonic/operator_/truediv.hpp"

namespace pythonic {

    namespace operator_ {
        template <class A, class B>
            auto itruediv(A  a, B const& b) ->decltype(truediv(a,b))
            {
                auto tmp = a;
                a = truediv(a,b);
                return truediv(tmp,b);
            }

        PROXY_IMPL(pythonic::operator_, itruediv);
    }

}

#endif
