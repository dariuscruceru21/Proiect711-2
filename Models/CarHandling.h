#ifndef DEMKU_DOMINIK_CARHANDLING_H
#define DEMKU_DOMINIK_CARHANDLING_H

#include <vector>
#include <string>
#include "Car.h"

class CarHandling : private Car{
private:
    bool isActive = true;
    bool isDriving = true;
    std::vector<Car> cars;

public:
    ///TODO
    ///ADD CRUD FOR CARS USING OBJECT TYPE GENERIC REPOSITORY
    CarHandling(std::string licensePlate,
    std::string model,
    std::string brand,
    unsigned int firstRegistrationYear,
    unsigned int mileage,
    float dailyPrice,
    std::string fuelType,
    std::string transmission,
    std::string color,
    std::string observation,
    bool isActive,
    bool isDriving,
    std::vector<Car> cars);

    void changeCarSpecs(std::string numberPlate, std::string model, std::string carBrand, std::string buildYear,
                        std::string mileage, float dailyPrice, std::string fuelType, std::string transmission,
                        std::string color, std::string description);

    ~CarHandling();

    void carDeactivation(bool isActive);

    bool carSearch(std::string numberPlate);

    std::string carSearchByPlateNumber(std::string numberPlate);

    std::string searchSorted("carordering");

    bool valid(std::string numberPlate, std::string buildYear, std::string mileage, float dailyPrice);


};


#endif //DEMKU_DOMINIK_CARHANDLING_H
