//
// Created by Andra on 4/4/2024.
//

#include "ClientHandling.h"
#include <regex>

bool ClientHandling::isInCorrectFormatEmail(Client c) {
    std::string email = c.getUserEmail();
    const std::regex pattern(R"(^[a-zA-Z]+(?:\.[a-zA-Z]+)?@[a-zA-Z]+\.[a-zA-Z]{2,}$)");

    return std::regex_match(email, pattern);
}

bool ClientHandling::isInCorrectFormatPhone(Client c) {
    std::string phone = c.getPhoneNumber();

    const std::regex pattern(R"(^\+\d{2} \d{9}$)");

    return std::regex_match(phone, pattern);
}

bool ClientHandling::firstNameAndLastNameGDPRDeletedTrue(Client c) {
    if (c.getGdpr()){
        //all data about user can be saved
    }else{
        //only name and firstname can be saved
    }
}