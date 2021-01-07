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

        void operator=(const Toy &copy);
        Toy &operator<<(const std::string ascii);

        ToyType getType(void) const { return (_type); }
        std::string getName(void) const { return (_name); }
        std::string getAscii(void) const { return (_picture.data); }

        bool setAscii(const std::string &filename);
        void setName(const std::string name) { _name = name; }

        virtual void speak(const std::string statement);
        virtual bool speak_es(const std::string statement);

        class Error {
            public:
                enum ErrorType {
                    UNKNOWN,
                    PICTURE,
                    SPEAK,
                };
                Error(void) : type(UNKNOWN) {}
                ~Error(void) {}

                std::string what(void) const;
                std::string where(void) const;

                ErrorType type;
        };

        Error getLastError(void) const { return (_error); }
    protected:
        ToyType _type;
        std::string _name;
        Picture _picture;
        Error _error;
};

std::ostream &operator<<(std::ostream &s, const Toy &toy);

#endif // TOY_HPP_
