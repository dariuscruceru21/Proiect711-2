#include "User.h"
#include <iostream>
#include <string>


#ifndef PROIECT711_2_CLIENT_H
#define PROIECT711_2_CLIENT_H


class Client: public User{
    private:
        bool gdpr;
        std::string observations;
        std::string phoneNumber;
        std::vector<std::string> favoriteList;//favorite cars

    public:
    ///TODO
    ///THE CLIENT CAN CHANGE HIS OWN ATTRIBS
    ///GETTERS + SETTERS
    ///LIST FAVORITE LIST


        Client(int id, std::string email, std::string password, std::string firstName, std::string lastName, std::string phoneNumber, bool gdpr,
               std::string obervations);
        Client();


};


#endif //PROIECT711_2_CLIENT_H
