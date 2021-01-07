//
// EPITECH PROJECT, 2020
// cpp_d16_2019
// File description:
// DomesticKoala.hpp
//

#ifndef DOMESTICKOALA_HPP_
# define DOMESTICKOALA_HPP_

#include <vector>
#include "KoalaAction.hpp"

class DomesticKoala {
    public:
        DomesticKoala(KoalaAction &koala) : _koala(koala) {}
        ~DomesticKoala () {}
        DomesticKoala(const DomesticKoala &);

        DomesticKoala &operator=(const DomesticKoala &);

        using methodPointer_t = void (KoalaAction::*)(const std::string &);
        void learnAction(unsigned char command, methodPointer_t action);
        void unlearnAction(unsigned char command);
        void doAction(unsigned char command, const std::string &param);
        void setKoalaAction(KoalaAction &);

        KoalaAction getKoala(void) const { return (_koala); }
        std::vector<unsigned char> getKeys(void) const { return (_key); }
        const std::vector<methodPointer_t> *getActions() const { return (&_actions); }
    private:
        KoalaAction _koala;
        std::vector<methodPointer_t> _actions;
        std::vector<unsigned char> _key;
};

#endif // DOMESTICKOALA_HPP_
