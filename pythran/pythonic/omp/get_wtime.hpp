#ifndef PYTHONIC_OMP_GET_WTIME_HPP
#define PYTHONIC_OMP_GET_WTIME_HPP

#include "pythonic/include/omp/get_wtime.hpp"

#include <omp.h>
#include "pythonic/utils/proxy.hpp"

namespace pythonic {

    namespace omp {

        long get_wtime()
        {
            return omp_get_wtime();
        }

        PROXY_IMPL(pythonic::omp, get_wtime);
    }

}

#endif
