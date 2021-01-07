//
// EPITECH PROJECT, 2020
// cpp_d07m_2019
// File description:
// WarpSystem.hpp
//

#ifndef WARPSYSTEM_HPP_
# define WARPSYSTEM_HPP_

namespace WarpSystem {
    class QuantumReactor {
        public:
            QuantumReactor(void);
            ~QuantumReactor(void);
            bool isStable(void);
            void setStability(bool stability);
        private:
            bool _stability;
    };

    class Core {
        public:
            Core(QuantumReactor *coreReactor);
            ~Core(void);
            QuantumReactor *checkReactor(void);
        private:
            QuantumReactor *_coreReactor;
    };
}

#endif // WARPSYSTEM_HPP_
