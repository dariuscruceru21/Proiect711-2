//
// Created by Andrei on 10.04.2024.
//

#ifndef PROIECT711_2_CAR_H
#define PROIECT711_2_CAR_H

#include <string>
#include "sstream"

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
    Car(std::string licensePlate, std::string model, std::string brand,
        unsigned int firstRegistrationYear, unsigned int mileage,
        float dailyPrice, std::string fuelType, std::string transmission,
        std::string color, std::string observation);

    // Getters
    std::string getLicensePlate() const { return licensePlate; }

    std::string getModel() const { return model; }

    std::string getBrand() const { return brand; }

    unsigned int getFirstRegistrationYear() const { return firstRegistrationYear; }

    unsigned int getMileage() const { return mileage; }

    float getDailyPrice() const { return dailyPrice; }

    std::string getFuelType() const { return fuelType; }

    std::string getTransmission() const { return transmission; }

    std::string getColor() const { return color; }

    std::string getObservation() const { return observation; }

    // Setters
    void setLicensePlate(const std::string &Plate_License) { licensePlate = Plate_License; }

    void setModel(const std::string &Model) { model = Model; }

    void setBrand(const std::string &Brand) { brand = Brand; }

    void setFirstRegistrationYear(unsigned int FirstRegistrationYear) { firstRegistrationYear = FirstRegistrationYear; }

    void setMileage(unsigned int Mileage) { mileage = Mileage; }

    void setDailyPrice(float DailyPrice) { dailyPrice = DailyPrice; }

    void setFuelType(const std::string &FuelType) { fuelType = FuelType; }

    void setTransmission(const std::string &Transmission) { transmission = Transmission; }

    void setColor(const std::string &Color) { color = Color; }

    void setObservation(const std::string &Observation) { observation = Observation; }

    //transform obect into csv format
    std::string toCSV() const;

    //transform object from csv format
    void fromCSV(const std::string &csvLine);
};


#endif //PROIECT711_2_CAR_H
