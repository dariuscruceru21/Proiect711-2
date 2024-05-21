#ifndef PROIECTU_MARE_CARORDERING_H
#define PROIECTU_MARE_CARORDERING_H

#include <ctime>
#include <iostream>
#include "User.h"
#include "Car.h"
//#include "CarHandling.h"
#include "Employee.h"

class CarOrdering{
private:
    int orderNumber;

    tm* orderDate;
    tm* begin;
    tm* end;

    std::string status;
    Car car;/** TODO */
    User user;
    Employee employee; /** TODO */
    float moneySum;
    std::string observation;

public:
    CarOrdering(float moneySum, std::string observation, User user, tm *begin, tm *end, Car car,Employee employee1);
    CarOrdering(float moneySum, std::string observation, User user, tm *end, Car car,Employee employee1);
    tm getOrderDate();
    void changeStatus();

    //B.2 Nur Mitarbeiter durfen
    int changeOrder(int orderNumber,Employee employee);


};


#endif //PROIECTU_MARE_CARORDERING_H
