#ifndef USER_H_INCLUDED
#define USER_H_INCLUDED
#include <string>

class User
{
protected:
    std::string name;
    std::string lastName;
public:
    User(std::string, std::string);
    ~User() {};
    std::string getName()
    {
        return name;
    };
    std::string getLastName()
    {
        return lastName;
    };
};

#endif // USER_H_INCLUDED
