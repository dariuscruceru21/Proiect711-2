//
// Created by Arthur Horeanu on 04.04.2024.
//

#include "User.h"
#include <string>

#ifndef PROIECT711_2_EMPLOYEE_H
#define PROIECT711_2_EMPLOYEE_H


class Employee : public User {
private:
    std::string position;
    std::string birthDate;
    std::string initials;
    double salary;///BY DEFAULT 100, CANT BE UNDER 100
    std::string observations;

public:
    ///
    ///TODO:
    /// CHANGE STATUS (ACTIVE / INACTIVE)
    ///CREATE CUSTOMER
    Employee(int id,std::string email, std::string password, std::string firstName, std::string lastName, std::string position, std::string birthDate, std::string initials, double salary, std::string observations);
    Employee();
};

#endif //PROIECT711_2_EMPLOYEE_H