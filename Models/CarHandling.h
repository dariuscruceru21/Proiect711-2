#ifndef DEMKU_DOMINIK_CARHANDLING_H
#define DEMKU_DOMINIK_CARHANDLING_H

#include <vector>
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
    bool isDriving = true;
    std::vector<CarHandling> cars;

public:
    CarHandling(std::string numberPlate, std::string model, std::string carBrand, std::string buildYear,
                std::string mileage, float dailyPrice, std::string fuelType, std::string transmission, std::string color,
                std::string description);

    void changeCarSpecs(std::string numberPlate , std::string model , std::string carBrand , std::string buildYear , std::string mileage , float dailyPrice , std::string fuelType , std::string transmission , std::string color , std::string description);

    ~CarHandling();

    void carDeactivation(bool isActive);

    bool carSearch(std::string numberPlate);

    //std::string carSearchByPlateNumber(std::string numberPlate);

    std::string serachSorted("carordering");

    bool valid(std::string numberPlate, std::string buildYear, std::string mileage, float dailyPrice);
    
    

};


#endif //DEMKU_DOMINIK_CARHANDLING_H
