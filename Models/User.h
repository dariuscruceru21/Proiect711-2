
#include <string>

#ifndef PROIECT711_2_USER_H
#define PROIECT711_2_USER_H


class User {
private:
    int id;
    std::string email;
    std::string password;
    std::string firstName;
    std::string lastName;

public:
    //constructor for User class
    User(int id,std::string email, std::string password, std::string firstName, std::string lastName);

    User();

};


#endif //PROIECT711_2_USER_H
