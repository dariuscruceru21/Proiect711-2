//
// Created by Darius on 4/10/2024.
//

#include "Client.h"
#include <string>


Client::Client(int id,std::string email, std::string password, std::string firstName, std::string lastName,
               std::string telefonNumber, bool gdpr) {
    this->telefonNumber = telefonNumber;
    this->gdpr = gdpr;
    User(id,email,password,firstName,lastName);
}

Client::Client() {}