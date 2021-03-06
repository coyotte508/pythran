#ifndef PYTHONIC_INCLUDE_MATH_MODF_HPP
#define PYTHONIC_INCLUDE_MATH_MODF_HPP

#include "pythonic/utils/proxy.hpp"
#include "pythonic/types/tuple.hpp"

#include <cmath>

namespace pythonic {

    namespace math {
        std::tuple<double,double> modf(double x);
        PROXY_DECL(pythonic::math,modf);

    }

}

#endif

