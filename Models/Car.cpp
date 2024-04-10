//
// Created by Andrei on 10.04.2024.
//

#include "Car.h"

Car::Car(int Plate_License, std::string Model, std::string Brand, unsigned int FirstRegistrationYear, unsigned int Mileage,
         float DailyPrice, std::string FuelType, std::string Transmission, std::string Color, std::string Observation) {
    licensePlate = Plate_License;
    model = Model;
    brand = Brand;
    firstRegistrationYear = FirstRegistrationYear;
    dailyPrice = DailyPrice;
    fuelType = FuelType;
    transmission = Transmission;
    color = Color;
    observation = Observation;

}