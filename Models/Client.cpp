//
// Created by Darius on 4/10/2024.
//

#include "Client.h"
#include <string>


Client::Client(int id,std::string email, std::string password, std::string firstName, std::string lastName,
               std::string telefonNumber, bool gdpr, std::string observations) {
    this->phoneNumber = telefonNumber;
    this->gdpr = gdpr;
    this->observations = observations;
    User(id, email, password, firstName, lastName);
}


Client::Client() {}


bool Client::getGdpr() const {
    return this->gdpr;
}


std::string Client::getObservations() const {
    return this->observations;
}


std::vector<std::string> Client::getFavoriteList() const {
    return favoriteList;
}


std::string Client::getPhoneNumber() const {
    return phoneNumber;
}


void Client::setObservations(std::string newObservations) {
    observations = newObservations;
}


void Client::setGdpr(bool newGdpr) {
    gdpr = newGdpr;
}


void Client::setPhoneNumber(std::string newNumber) {
    phoneNumber = newNumber;
}


void Client::setFavoriteList(std::vector<std::string> newFavoritelist) {
    favoriteList = newFavoritelist;
}