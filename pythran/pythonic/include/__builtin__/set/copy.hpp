#ifndef PYTHONIC_INCLUDE_BUILTIN_SET_COPY_HPP
#define PYTHONIC_INCLUDE_BUILTIN_SET_COPY_HPP

#include "pythonic/__dispatch__/copy.hpp"

namespace pythonic {

    namespace __builtin__  {

        namespace set {

            ALIAS_DECL(copy, pythonic::__dispatch__::copy);

            PROXY_DECL(pythonic::__builtin__::set, copy);
        }

    }

}
#endif 
