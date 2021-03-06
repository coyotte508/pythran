#ifndef PYTHONIC_RANDOM_RANDINT_HPP
#define PYTHONIC_RANDOM_RANDINT_HPP

#include "pythonic/include/random/randint.hpp"

#include "pythonic/utils/proxy.hpp"
#include "pythonic/random/randrange.hpp"

namespace pythonic {

    namespace random {

        long randint(long a, long b)
        {
            // TODO: It should be implemented with an uniform_int_distribution
            return randrange(a, b+1);
        }

        PROXY_IMPL(pythonic::random, randint);

    }

}

#endif
