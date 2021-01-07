//
// EPITECH PROJECT, 2020
// cpp_d13_2019
// File description:
// Toy.hpp
//

#ifndef TOY_HPP_
# define TOY_HPP_

#include "Picture.hpp"

class Toy {
    public:
        enum ToyType {
            BASIC_TOY,
            ALIEN,
            BUZZ,
            WOODY,
        };

        Toy(void) : _type(BASIC_TOY), _name("toy") {}
        Toy(const Toy &copy);
        Toy(const ToyType type, const std::string name, const std::string filename) : _type(type), _name(name) { _picture.getPictureFromFile(filename); }
        virtual ~Toy(void) {}

        Toy &operator=(const Toy &copy);

        ToyType getType(void) const { return (_type); }
        std::string getName(void) const { return (_name); }
        std::string getAscii(void) const { return (_picture.data); }

        bool setAscii(const std::string &filename) { return (_picture.getPictureFromFile(filename)); }
        void setName(const std::string name) { _name = name; }
    protected:
        ToyType _type;
        std::string _name;
        Picture _picture;
};

#endif // TOY_HPP_
