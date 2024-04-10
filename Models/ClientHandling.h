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


    public:
        ClientHandling(int new_ID);
        ClientHandling();

        //aici sa se apeleze constructoru de la client
        void createClient(int ID, std :: string name, std :: string  surname, std :: string email, std :: string  phoneNumber, std :: string  adress, std :: string  notes, bool gdprDeleted);

        //sa intri in repo la clienti si sa cauti clientu care trebe schimbat
        void changeClient();

        void deleteClient(int ID);

        void listClients();

        void searchClientsByEmail(std :: string email);

        int searchClientsByName(std::string name, std::string surname);

        void searchClientsByPhone(std::string phoneNumber);
};


#endif //PROIECT711_2_CLIENTHANDLING_H
