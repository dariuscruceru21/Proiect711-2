//
// Created by Andrei on 10.04.2024.
//

#ifndef PROIECT711_2_CAR_H
#define PROIECT711_2_CAR_H

#include <string>
using namespace std;
class Car {
private:
    string licensePlate;
    string model;
    string brand;
    unsigned int firstRegistrationYear;
    unsigned int mileage;
    float dailyPrice;
    string fuelType;
    string transmission;
    string color;
    string observation;
public:
    // Car constructor
    Car(std::string licensePlate, std::string model, std::string brand,
        unsigned int firstRegistrationYear, unsigned int mileage,
        float dailyPrice, std::string fuelType, std::string transmission,
        std::string color, std::string observation): licensePlate(licensePlate), model(model), brand(brand),
              firstRegistrationYear(firstRegistrationYear), mileage(mileage),
              dailyPrice(dailyPrice), fuelType(fuelType),
              transmission(transmission), color(color),
              observation(observation) {}
};


#endif //PROIECT711_2_CAR_H
