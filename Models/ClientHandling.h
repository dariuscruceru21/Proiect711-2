//
// Created by Andra on 4/4/2024.
//
#include <string>

#ifndef PROIECT711_2_CLIENTHANDLING_H
#define PROIECT711_2_CLIENTHANDLING_H

#include "Client.h"

class ClientHandling : Client {


public:

    ClientHandling();

    //aici sa se apeleze constructoru de la client
    void createClient(int ID, std::string name, std::string surname, std::string email, std::string phoneNumber,
                      std::string adress, std::string notes, bool gdprDeleted);


    void
    changeClient(std::string name = "", std::string surname = "", std::string email = "", std::string phoneNumber = "",
                 std::string adress = "", std::string notes = " ");

    void deleteClient(int ID);

    void listClients();

    void searchClientsByEmail(std::string email);

    void searchClientsByName(std::string name, std::string surname);

    void searchClientsByPhone(std::string phoneNumber);

    void searchClientsByCar(std::string model);


    ////validations
    bool uniqueEmail(Client c);

    //email format: firstname.lastname@smth.com
    bool isInCorrectFormatEmail(Client c);

    //phone format: +00 123456789
    bool isInCorrectFormatPhone(Client c);


    bool firstNameAndLastNameGDPRDeletedTrue(Client c);


};


#endif //PROIECT711_2_CLIENTHANDLING_H
