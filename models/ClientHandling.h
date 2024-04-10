//
// Created by Andra on 4/4/2024.
//
#include <string>
#ifndef PROIECT711_2_CLIENTHANDLING_H
#define PROIECT711_2_CLIENTHANDLING_H
#include "Client.h"

class ClientHandling {
    private:
        int ID;
        std :: string name, surname, email, phoneNumber, address, notes;
        bool gdprDeleted;


    public:
        ClientHandling();

        //aici sa se apeleze constructoru de la client
        void createClient(int ID, std :: string name, std :: string  surname, std :: string email, std :: string  phoneNumber, std :: string  adress, std :: string  notes, bool gdprDeleted);


        void changeClient(std :: string name = "", std :: string  surname = "", std :: string email = "", std :: string  phoneNumber = "", std :: string  adress = "", std :: string  notes = " ");

        void deleteClient(int ID);

        void listClients();

        void searchClientsByEmail(std :: string email);
        void searchClientsByName(std::string name, std::string surname);
        void searchClientsByPhone(std::string phoneNumber);
        void searchClientsByCar(std::string model);


        ////validations
        bool uniqueEmail(Client);
        bool isInCorrectFormatEmail(Client);
        bool isInCorrectFormatPhone(Client);
        bool allCompletedWhenGDPRDeletedFalse(Client);
        bool firstNameAndLastNameGDPRDeletedTrue(Client);




};


#endif //PROIECT711_2_CLIENTHANDLING_H
