//
// EPITECH PROJECT, 2020
// cpp_d14m_2019
// File description:
// MixerBase.hpp
//

#ifndef MIXERBASE_HPP_
# define MIXERBASE_HPP_

#include "FruitBox.hpp"

class MixerBase {
    public:
        MixerBase ();

        int mix(FruitBox &fruits) const;
    protected:
        bool  _plugged;
        int (*_mixfunc)(FruitBox &fruits);
};

#endif // MIXERBASE_HPP_
