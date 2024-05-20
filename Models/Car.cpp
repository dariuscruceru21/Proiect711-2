//
// Created by Andrei on 10.04.2024.
//

#include "Car.h"

Car::Car(std::string licensePlate, std::string model, std::string brand, unsigned int firstRegistrationYear,
         unsigned int mileage, float dailyPrice, std::string fuelType, std::string transmission, std::string color,
         std::string observation) {
    this->licensePlate = licensePlate;
    this->model = model;
    this->brand = brand;
    this->firstRegistrationYear = firstRegistrationYear;
    this->mileage = mileage;
    this->dailyPrice = dailyPrice;
    this->fuelType = fuelType;
    this->transmission = transmission;
    this->color = color;
    this->observation = observation;

}

std::string Car::toCSV() const {
    std::ostringstream oss;
    oss << this->licensePlate << "," << this->model << "," << this->brand << "," << this->firstRegistrationYear << ","
        << this->mileage << "," << this->dailyPrice << "," << this->fuelType << "," << this->transmission << ","
        << this->color << "," << this->observation;
}

void Car::fromCSV(const std::string &csvLine) {
    std::istringstream ss(csvLine);
    std::getline(ss, this->licensePlate, ',');
    std::getline(ss, this->model, ',');
    std::getline(ss, this->brand, ',');
    ss >> this->firstRegistrationYear;
    ss.ignore(1); // Ignore the comma
    ss >> this->mileage;
    ss.ignore(1); // Ignore the comma
    ss >> this->dailyPrice;
    ss.ignore(1); // Ignore the comma
    std::getline(ss, this->fuelType, ',');
    std::getline(ss, this->transmission, ',');
    std::getline(ss, this->color, ',');
    std::getline(ss, this->observation, ',');
}