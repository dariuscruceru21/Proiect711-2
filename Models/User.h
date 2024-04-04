
#include <string>

#ifndef PROIECT711_2_USER_H
#define PROIECT711_2_USER_H


class User {
private:
    std::string email;
    std::string password;
    std::string firstName;
    std::string lastName;

public:
    //constructor for User class
    User(std::string email, std::string password, std::string firstName, std::string lastName);

};


#endif //PROIECT711_2_USER_H
