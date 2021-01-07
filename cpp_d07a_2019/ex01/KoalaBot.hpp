//
// EPITECH PROJECT, 2020
// cpp_d07a_2019
// File description:
// KoalaBot.hpp
//

#ifndef KOALABOT_HPP_
# define KOALABOT_HPP_

#include "Parts.hpp"

class KoalaBot {
    public:
        KoalaBot(std::string serial = "Bob-01");

        void setParts(Arms arms);
        void setParts(Legs legs);
        void setParts(Head head);
        void swapParts(Arms arms);
        void swapParts(Legs legs);
        void swapParts(Head head);
        void informations(void) const;
        bool status() const;
    private:
        std::string _serial;
        Arms _arms;
        Legs _legs;
        Head _head;
};

#endif // KOALABOT_HPP_
