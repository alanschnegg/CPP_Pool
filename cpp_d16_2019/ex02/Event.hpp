//
// EPITECH PROJECT, 2020
// cpp_d16_2019
// File description:
// Event.hpp
//

#ifndef EVENT_HPP_
# define EVENT_HPP_

#include <string>

class Event {
    public:
        Event() : _time(0), _event("") {}
        Event(unsigned int time, const std::string &event) : _time(time), _event(event) {}
        ~Event() {}
        Event(const Event &other) { _time = other.getTime(); _event = other.getEvent(); }
        Event &operator=(const Event &other) { _time = other.getTime(); _event = other.getEvent(); return (*this); }

        unsigned int getTime() const { return (_time); }
        const std:: string &getEvent () const { return (_event); }
        void setTime(unsigned int time) { _time = time; }
        void setEvent(const std::string &event) { _event = event; }
    private:
        unsigned int _time;
        std::string _event;
};

#endif // EVENT_HPP_
