//
// Created by Darius on 4/4/2024.
//

#include "User.h"


User::User(int id,std::string email, std::string password, std::string firstName, std::string lastName) {
    this->id = id;
    this->email = email;
    this->password = password;
    this->firstName = firstName;
    this->lastName = lastName;
}

User::User() {}

std::string User::getUserFirstName() {
    return this->firstName;
}

std::string User::getUserEmail() {
    return this->email;
}

std::string User::getUserLastName() {
    return this->lastName;
}

std::string User::getUserPassword() {
    return this->password;
}

void User::setUserFirstName(std::string newFirstName) {
    this->firstName = newFirstName;
}

void User::setUserLastName(std::string newLastName) {
    this->lastName = newLastName;
}

void User::setUserEmail(std::string newEmail) {
    this->email = newEmail;
}

void User::setUserPassword(std::string newPassword) {
    this->password = newPassword;
}