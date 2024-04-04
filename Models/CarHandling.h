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
    float dailyPrice;
    std::string fuelType;
    std::string transmission;
    std::string color;
    std::string description;
    bool isActive = true;
    bool isDriving;

public:
    CarHandling(std::string numberPlate, std::string model, std::string carBrand, std::string buildYear,
                std::string mileage, float dailyPrice, std::string fuelType, std::string transmission, std::string color,
                std::string description);

    void changeCarSpecs(std::string numberPlate , std::string model , std::string carBrand , std::string buildYear , std::string mileage , float dailyPrice , std::string fuelType , std::string transmission , std::string color , std::string description);

    ~CarHandling(bool isDriving);

    void carDeactivation(bool isActive);

    std::string carSearch(bool isDriving);

    std::string carSearchByPlateNumber(std::string numberPlate);

    string serachSorted("carordering");

    bool valid(std::string numberPlate, std::string buildYear, std::string mileage, float dailyPrice);
    
    

};


#endif //DEMKU_DOMINIK_CARHANDLING_H