//
// EPITECH PROJECT, 2020
// cpp_d15_2019
// File description:
// ex05.hpp
//

#ifndef EX05_HPP_
# define EX05_HPP_

#include <iostream>

template <typename T>
class array {
    public:
        array() :  _size(0), _tab(nullptr) {}
        array(unsigned int n) :  _size(n), _tab(new T[n]) {}
        array(const array &copy) {
            _size = copy._size;
            _tab = new T[_size];
            for (unsigned int i = 0; i < _size; i++)
                _tab[i] = copy._tab[i];
        }
        ~array(void) {
            if(_size)
                delete[] _tab;
        }

        array &operator=(const array &copy) {
            if(_size)
                delete[] _tab;
            _size = copy._size;
            _tab = new T[_size];
            for (unsigned int i = 0; i < _size; i++)
                _tab[i] = copy._tab[i];
            return (*this);
        }

        T &operator[](unsigned int index) const {
            if (index >= _size)
                throw std::exception();
            return (_tab[index]);
        }

        T &operator[](unsigned int index) {
            if (index >= _size) {
                T *tmp = new T[index + 1];
                for (unsigned int i = 0; i < _size; i++)
                    tmp[i] = _tab[i];
                delete[] _tab;
                _tab = tmp;
                _size = index + 1;
            }
            return (_tab[index]);
        }

        unsigned int size() const { return (_size); }

        void dump(void) const {
            std::cout << "[";
            if (_tab != nullptr) {
                std::cout << _tab[0];
                for (unsigned int i = 1; i < _size; i++)
                    std::cout << ", " << _tab[i];
            }
            std::cout << "]" << std::endl;
        }

        template <typename U>
        array<U> convertTo(U (*convert)(T const&a)) {
            array <U> tmp(_size);

            for (unsigned int i = 0; i < _size; i++)
                tmp[i] = (*convert)(_tab[i]);
            return (tmp);
        }
    protected:
        unsigned int _size;
        T *_tab;
};

template<>
void array<bool>::dump(void) const
{
    std::cout << "[";
    if (_tab != nullptr) {
        std::cout << std::boolalpha << _tab[0];
        for (unsigned int i = 1; i < _size; i++)
            std::cout << ", " << std::boolalpha << _tab[i];
    }
    std::cout << "]" << std::endl;
}

#endif // EX05_HPP_
