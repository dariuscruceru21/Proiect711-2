#ifndef DEMKU_DOMINIK_CARHANDLING_H
#define DEMKU_DOMINIK_CARHANDLING_H

#include <string>

class CarHandling {
private:
    std::string numberPlate;
    std::string model;
    std::string carBrand;
    std::string buildYear;
    std::string mileage;
    int dailyPrice;
    std::string fuelType;
    std::string transmission;
    std::string color;
    std::string description;
    bool isActive = true;
    bool isDriving;

public:
    CarHandling(std::string numberPlate, std::string model, std::string carBrand, std::string buildYear,
                std::string mileage, int dailyPrice, std::string fuelType, std::string transmission, std::string color,
                std::string description);

    void changeCarSpecs(std::string numberPlate , std::string model , std::string carBrand , std::string buildYear , std::string mileage , int dailyPrice , std::string fuelType , std::string transmission , std::string color , std::string description);

    ~CarHandling(bool isDriving);

    void carDeactivation(bool isActive);

    string carSearch(bool isDriving);

};


#endif //DEMKU_DOMINIK_CARHANDLING_H
