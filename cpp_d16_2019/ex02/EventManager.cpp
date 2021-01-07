//
// EPITECH PROJECT, 2020
// cpp_d16_2019
// File description:
// EventManager.cpp
//

#include "EventManager.hpp"

static bool sortByTime(const Event &a, const Event &b)
{
    if (a.getTime() <= b.getTime())
        return(true);
    return (false);
}

void EventManager::addEvent(const Event &e)
{
    if (e.getTime() > _time) {
        _event.push_back(e);
        _event.sort(sortByTime);
    }
}

void EventManager::removeEventsAt(unsigned int time)
{
    for (std::list<Event>::iterator it = _event.begin(); it != _event.end(); it++) {
        if (it->getTime() == time) {
            _event.erase(it);
            it = _event.begin();
        }
    }
}

void EventManager::dumpEvents() const
{
    for (Event it : _event)
        std::cout << it.getTime() << ": " << it.getEvent() << std::endl;
}

void EventManager::dumpEventAt(unsigned int time) const
{
    for (Event it : _event)
        if (it.getTime() == time)
            std::cout << it.getTime() << ": " << it.getEvent() << std::endl;
}

void EventManager::addTime(unsigned int time)
{
    _time += time;
    while (_event.empty() == false && _event.front().getTime() <= _time) {
        std::cout << _event.front().getEvent() << std::endl;
        _event.erase(_event.begin());
    }
}

void EventManager::addEventList(std::list<Event> &events)
{
    for (Event it : events)
        addEvent(it);
}
