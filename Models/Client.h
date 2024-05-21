#include "User.h"
#include <iostream>
#include <string>
#include <vector>

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
               std::string observations);
        Client();

    bool getGdpr() const;

    std::string getObservations() const;

    std::string getPhoneNumber() const;

    std::vector<std::string> getFavoriteList() const;

    void setGdpr(bool newGdpr);

    void setObservations(std::string newObservations);

    void setPhoneNumber(std::string newNumber);

    void setFavoriteList(std::vector<std::string> newFavoritelist);


};


#endif //PROIECT711_2_CLIENT_H
