
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

    std::string getUserEmail();
    std::string getUserPassword();
    std::string getUserFirstName();
    std::string getUserLastName();

    void setUserFirstName(std::string newFirstName);
    void setUserLastName(std::string newLastName);
    void setUserPassword(std::string newPassword);
    void setUserEmail(std::string newEmail);
};


#endif //PROIECT711_2_USER_H
