//
// Created by Arthur Horeanu on 04.04.2024.
//

#include "Employee.h"

Employee::Emplyee(std::string email, std::string password, std::string firstName, std::string lastName, std::string position, std::string birthDate, std::string initials, std::double salary, std::string observations) {
    this->email = email;
    this->password = password;
    this->firstName = firstName;
    this->lastName = lastName;
    this->position = position;
    this->birthDate = birthDate;
    this->initials = initials;
    this->salary = salary;
    this->observations = observations;
}
