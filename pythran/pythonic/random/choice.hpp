#ifndef PYTHONIC_RANDOM_CHOICE_HPP
#define PYTHONIC_RANDOM_CHOICE_HPP

#include "pythonic/include/random/choice.hpp"

#include "pythonic/utils/proxy.hpp"
#include "pythonic/random/random.hpp"

namespace pythonic {

    namespace random {

        template<class Seq>
            typename Seq::value_type choice(Seq const& seq)
            {
                return seq[long(random() * seq.size())];
            }

        PROXY_IMPL(pythonic::random, choice);

    }

}

#endif
