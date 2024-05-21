//
// Created by scoti on 10.04.2024.
//

#include <string>
#include "Admin.h"



Admin::Admin(std::string email, std::string password, std::string firstName, std::string lastName, std::string position, std::string birthDate, std::string initials,
             double salary, std::string observations) {
    Employee(email,password,firstName,lastName,position,birthDate,initials,salary,observations);
}

std::string Admin::getAdminFirstName() {
    return this->firstName;
}

std::string Admin::getAdminEmail() {
    return this->email;
}

std::string Admin::getAdminLastName() {
    return this->lastName;
}

std::string Admin::getAdminPassword() {
    return this->password;
}

void Admin::setAdminFirstName(std::string newFirstName) {
    this->firstName = newFirstName;
}

void Admin::setAdminLastName(std::string newLastName) {
    this->lastName = newLastName;
}

void Admin::setAdminEmail(std::string newEmail) {
    this->email = newEmail;
}

void Admin::setAdminPassword(std::string newPassword) {
    this->password = newPassword;
}
