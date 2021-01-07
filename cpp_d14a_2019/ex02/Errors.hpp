
#ifndef ERRORS_HPP_
#define ERRORS_HPP_

#include <string>
#include <exception>

class NasaError : public std::exception
{
    public:
        NasaError(std::string const &message,
                std::string const &component = "Unknown") : _message(message), _component(component) {}
        virtual ~NasaError() throw() {}

        std::string const &getComponent() const { return (_component); }
        const char *what() const noexcept { return (_message.c_str()); }
    private:
        std::string _message;
        std::string _component;
};

class MissionCriticalError : public NasaError
{
    public:
        MissionCriticalError(std::string const &message,
                std::string const &component = "Unknown") : NasaError(message, component) {}
        virtual ~MissionCriticalError() throw() {}
};

class LifeCriticalError : public NasaError
{
    public:
        LifeCriticalError(std::string const &message,
                std::string const &component = "Unknown") : NasaError(message, component) {}
        virtual ~LifeCriticalError() throw() {}
};

class UserError : public NasaError
{
    public:
        UserError(std::string const &message,
                std::string const &component = "Unknown") : NasaError(message, component) {}
        virtual ~UserError() throw() {}
};

class CommunicationError : public NasaError
{
    public:
        CommunicationError(std::string const &message) : NasaError(message, "CommunicationDevice") {}
    virtual ~CommunicationError() throw() {}
};

#endif
