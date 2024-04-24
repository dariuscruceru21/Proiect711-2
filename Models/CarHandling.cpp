#include "CarHandling.h"

CarHandling::CarHandling(std::string numberPlate, std::string model, std::string carBrand, std::string buildYear,
                         std::string mileage, float dailyPrice, std::string fuelType, std::string transmission,
                         std::string color, std::string description) {
    this->numberPlate = numberPlate;
    this->model = model;
    this->carBrand = carBrand;
    this->buildYear = buildYear;
    this->mileage = mileage;
    this->dailyPrice = dailyPrice;
    this->fuelType = fuelType;
    this->transmission = transmission;
    this->color = color;
    this->description = description;
}

void
CarHandling::changeCarSpecs(std::string numberPlate, std::string model, std::string carBrand, std::string buildYear,
                            std::string mileage, float dailyPrice, std::string fuelType, std::string transmission,
                            std::string color, std::string description) {

    this->numberPlate = numberPlate;
    this->model = model;
    this->carBrand = carBrand;
    this->buildYear = buildYear;
    this->mileage = mileage;
    this->dailyPrice = dailyPrice;
    this->fuelType = fuelType;
    this->transmission = transmission;
    this->color = color;
    this->description = description;
}

void CarHandling::carDeactivation(bool isActive) {
    this->isActive = false;
}

bool CarHandling::carSearch(std::string numberPlate) {
    for (auto car : this->cars){
        if (car.numberPlate == numberPlate)
            return true;
    }
    return false;
}


//CarHandling::~CarHandling() {
//    if (this->isDriving == true)
//        return;
//    delete CarHandling;
//}
