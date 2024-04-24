#include "User.h"


#ifndef PROIECT711_2_CLIENT_H
#define PROIECT711_2_CLIENT_H


class Client: public User{
    private:
        bool gdpr;
        std::string phoneNumber;

    public:
        Client(int id, std::string email, std::string password, std::string firstName, std::string lastName, std::string phoneNumber, bool gdpr);

        Client();


};


#endif //PROIECT711_2_CLIENT_H
