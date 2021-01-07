//
// EPITECH PROJECT, 2020
// cpp_d16_2019
// File description:
// EventManager.hpp
//

#ifndef EVENTMANAGER_HPP_
# define EVENTMANAGER_HPP_

#include "Event.hpp"
#include <list>
#include <iostream>

class EventManager {
    public:
        EventManager() : _time(0) {}
        ~EventManager() {}
        EventManager(EventManager const &other) { _time = other.getTime(); _event = other.getEvent(); }
        EventManager &operator=(EventManager const &other) { _time = other.getTime(); _event = other.getEvent(); return (*this); }

        void addEvent(const Event &e);
        void removeEventsAt(unsigned int time);
        void dumpEvents() const;
        void dumpEventAt(unsigned int time) const;
        void addTime(unsigned int time);
        void addEventList(std::list<Event> &events);

        unsigned int getTime(void) const { return (_time); }
        std::list<Event> getEvent(void) const { return (_event); }
    private:
        unsigned int _time;
        std::list<Event> _event;
};

#endif // EVENTMANAGER_HPP_
