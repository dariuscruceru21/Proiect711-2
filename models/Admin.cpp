//
// Created by scoti on 10.04.2024.
//

#include <string>
#include "Admin.h"



Admin::Admin(std::string email, std::string password, std::string firstName, std::string lastName, std::string position, std::string birthDate, std::string initials,
             double salary, std::string observations) {
    Employee(email,password,firstName,lastName,position,birthDate,initials,salary,observations);
}