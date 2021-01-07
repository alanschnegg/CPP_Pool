//
// EPITECH PROJECT, 2020
// cpp_d08_2019
// File description:
// Droid.hpp
//

#ifndef DROID_HPP_
# define DROID_HPP_

#include <iostream>
#include "DroidMemory.hpp"

class Droid {
    public:
        Droid(std::string serial = "");
        Droid(const Droid &droid);
        ~Droid(void);

        std::string getId(void) const;
        std::string *getStatus(void) const;
        size_t getEnergy(void) const;
        size_t getAttack(void) const;
        size_t getToughness(void) const;
        DroidMemory *getBattleData(void) const;

        void setId(std::string id);
        void setStatus(std::string *status);
        void setEnergy(size_t energy);
        void setBattleData(DroidMemory*);

        void operator<<(size_t &size);
        Droid &operator=(const Droid &droid);
        bool operator!=(const Droid &droid) const;
        bool operator==(const Droid &droid) const;
    private:
        std::string _id;
        size_t _energy;
        size_t _attack;
        size_t _toughness;
        std::string *_status;
        DroidMemory *BattleData;
};

std::ostream &operator<<(std::ostream &s, const Droid &droid);

#endif // DROID_HPP_
