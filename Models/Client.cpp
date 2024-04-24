//
// Created by Darius on 4/10/2024.
//

#include "Client.h"
#include <string>


Client::Client(std::string email, std::string password, std::string firstName, std::string lastName,
               std::string telefonNumber, bool gdpr) {
    this->phoneNumber = telefonNumber;
    this->gdpr = gdpr;
    User(email,password,firstName,lastName);
}

Client::Client() {}



