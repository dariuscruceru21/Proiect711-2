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
