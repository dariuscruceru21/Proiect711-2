//
// Created by scoti on 10.04.2024.
//
#include "Employee.h"

#ifndef PROIECT711_2_ADMIN_H
#define PROIECT711_2_ADMIN_H


class Admin: public Employee{
public:
Admin(std::string email, std::string password, std::string firstName, std::string lastName, std::string position, std::string birthDate, std::string initials, double salary, std::string observations);
///
///TODO:
/// GETTERS + SETTERS
///GIVE / REMOVE RIGHTS
///SHOW ALL EMPLOYEES SORTED BY LASTNAME,FIRSTNAME (IN REPO)
///
};


#endif //PROIECT711_2_ADMIN_H
