//
// Created by Arthur Horeanu on 04.04.2024.
//

#include "Employee.h"

Employee::Employee(std::string email, std::string password, std::string firstName, std::string lastName, std::string position, std::string birthDate, std::string initials, double salary, std::string observations){
    this->position = position;
    this->birthDate = birthDate;
    this->initials = initials;
    this->salary = salary;
    this->observations = observations;
    User(email, password, firstName, lastName);

}

Employee::Employee() {}