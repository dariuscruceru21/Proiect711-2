#ifndef PROIECTU_MARE_CARORDERING_H
#define PROIECTU_MARE_CARORDERING_H

#include <ctime>
#include <iostream>
#include "User.h"

class CarOrdering{
private:
    int orderNumber;

    time_t now = time(0);
    tm* orderDate = localtime(&now);
    tm* begin = localtime(&now);
    tm* end = localtime(&now);

    std::string status;
    //obj auto
    User user;
    //obj mitarbeiter
    float moneySum;
    std::string observation;

public:
    CarOrdering(User user, tm* begin, tm* end);
    CarOrdering(/*Car car, */User user, tm* end);
    tm getOrderDate();

};


#endif //PROIECTU_MARE_CARORDERING_H
