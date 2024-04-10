//
// Created by Andrei on 10.04.2024.
//

#ifndef PROIECT711_2_CAR_H
#define PROIECT711_2_CAR_H

#include <string>

class Car {
private:
    std::string licensePlate;
    std::string model;
    std::string brand;
    unsigned int firstRegistrationYear;
    unsigned int mileage;
    float dailyPrice;
    std::string fuelType;
    std::string transmission;
    std::string color;
    std::string observation;
public:
    // Car constructor
    Car(std::string Plate_License, std::string Model, std::string Brand,
        unsigned int FirstRegistrationYear, unsigned int Mileage,
        float DailyPrice, std::string FuelType, std::string Transmission,
        std::string Color, std::string Observation);
};


#endif //PROIECT711_2_CAR_H
