#ifndef PROIECTU_MARE_CARORDERING_H
#define PROIECTU_MARE_CARORDERING_H

#include <ctime>
#include <iostream>
#include "User.h"
#include "CarHandling.h"
#include "Employee.h"

class CarOrdering{
private:
    int orderNumber;


    tm* orderDate;
    tm* begin;
    tm* end;

    std::string status;
    //CarHandling car;/** TODO */
    User user;
    //Employee employee; /** TODO */
    float moneySum;
    std::string observation;

public:
    CarOrdering(User user, tm* begin, tm* end);
    CarOrdering(/**CarHandling car*/ User user, tm* end);
    tm getOrderDate();

    void changeStatus();

};


#endif //PROIECTU_MARE_CARORDERING_H
