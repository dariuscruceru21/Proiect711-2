//
// Created by Arthur Horeanu on 04.04.2024.
//

#include "Employee.h"

Employee::Employee(int id, std::string email, std::string password, std::string firstName, std::string lastName,
                   std::string position, std::string birthDate, std::string initials, double salary,
                   std::string observations) {
    this->position = position;
    this->birthDate = birthDate;
    this->initials = initials;
    this->salary = salary;
    this->observations = observations;
    User(id, email, password, firstName, lastName);

}

Employee::Employee() {}

std::string Employee::getPosition() {
    return this->position;
}

std::string Employee::getBirthDate() {
    return this->birthDate;
}

std::string Employee::getInitials() {
    return this->initials;
}

double Employee::getSalary() {
    return this->salary;
}

std::string Employee::getObservation() {
    return this->observations;
}

void Employee::setPosition(std::string newPosition) {
    this->position = newPosition;
}

void Employee::setBirthDate(std::string newBirthdate) {
    this->birthDate = newBirthdate;
}

void Employee::setInitials(std::string newInitials) {
    this->initials = newInitials;
}

void Employee::setSalary(double newSalary) {
    this->salary = newSalary;
}

void Employee::setObservation(std::string newObservation) {
    this->observations = newObservation;
}