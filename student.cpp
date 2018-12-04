#include <string>
#include "student.h"

void student::setName(std::string firstName, std::string lastName)
{
        firstname = firstName;
        lastname = lastName;
}

std::string student::fullName()
{
        std::string str;
        std::string str2 = firstname;
        std::string str3 = lastname;

        str.append(str2);
        str.append(" ");
        str.append(str3);
        return str;
}
