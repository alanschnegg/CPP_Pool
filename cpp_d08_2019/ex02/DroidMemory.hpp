//
// EPITECH PROJECT, 2020
// cpp_d08_2019
// File description:
// DroidMemory.hpp
//

#ifndef DROIDMEMORY_HPP_
# define DROIDMEMORY_HPP_

#include <iostream>

class DroidMemory {
    public:
        DroidMemory(void);
        DroidMemory(const DroidMemory &dmem);
        ~DroidMemory(void);

        size_t getFingerprint(void) const;
        size_t getExp(void) const;

        void setFingerprint(size_t fingerprint);
        void setExp(size_t exp);

        DroidMemory &operator+=(size_t exp);
        DroidMemory &operator+=(const DroidMemory &dmem);
        DroidMemory &operator+(size_t exp) const;
        DroidMemory &operator+(const DroidMemory &dmem) const;
        DroidMemory &operator=(const DroidMemory &dmem);
        DroidMemory &operator>>(DroidMemory &dmem) const;
        DroidMemory &operator<<(const DroidMemory &dmem);
        bool operator==(const DroidMemory &dmem) const;
        bool operator!=(const DroidMemory &dmem) const;
        bool operator<(const DroidMemory &dmem) const;
        bool operator>(const DroidMemory &dmem) const;
        bool operator<=(const DroidMemory &dmem) const;
        bool operator>=(const DroidMemory &dmem) const;
        bool operator<(size_t size) const;
        bool operator>(size_t size) const;
        bool operator<=(size_t size) const;
        bool operator>=(size_t size) const;
    private:
        size_t _fingerprint;
        size_t _exp;
};

std::ostream &operator<<(std::ostream &s, const DroidMemory &dmem);

#endif // DROIDMEMORY_HPP_
