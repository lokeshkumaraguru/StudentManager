#include <iostream>
#include <string>
#include "student.h"

#ifndef _STUDENT_H_
#define _STUDENT_H_
class student
{
  private:
    std::string firstname;
    std::string lastname;
  public:
    void setName(std::string, std::string);
    void fullName();
};
#endif
