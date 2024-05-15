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
    double salary;
    std::string observations;

public:
    ///
    ///TODO:
    /// CHANGE STATUS (ACTIVE / INACTIVE)
    ///CREATE CUSTOMER


    Employee(int id, std::string email, std::string password, std::string firstName, std::string lastName,
             std::string position, std::string birthDate, std::string initials, double salary,
             std::string observations);

    Employee();

    std::string getPosition();

    std::string getBirthDate();

    std::string getInitials();

    double getSalary();

    std::string getObservation();

    void setPosition(std::string newPosition);

    void setBirthDate(std::string newBirthdate);

    void setInitials(std::string newInitials);

    void setSalary(double newSalary);

    void setObservation(std::string newObservation);
};

#endif //PROIECT711_2_EMPLOYEE_H