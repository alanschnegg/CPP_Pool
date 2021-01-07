//
// EPITECH PROJECT, 2020
// cpp_d07m_2019
// File description:
// WarpSystem.cpp
//

#include "WarpSystem.hpp"

namespace WarpSystem {
    QuantumReactor::QuantumReactor(void)
    {
        this->_stability = true;
    }

    QuantumReactor::~QuantumReactor(void)
    {
    }

    bool QuantumReactor::isStable(void)
    {
        return (this->_stability);
    }

    void QuantumReactor::setStability(bool stability)
    {
        this->_stability = stability;
    }

    Core::Core(QuantumReactor *coreReactor)
    {
        this->_coreReactor = coreReactor;
    }

    Core::~Core(void)
    {
    }

    QuantumReactor *Core::checkReactor(void)
    {
        return (this->_coreReactor);
    }
}
