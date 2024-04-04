#ifndef PROIECTU_MARE_CARORDERING_H
#define PROIECTU_MARE_CARORDERING_H

#include <ctime>
#include <iostream>

using namespace std;

class CarOrdering {
private:
    int orderNumber;

    time_t now = time(0);
    tm* orderDate = localtime(&now);
    tm* begin = localtime(&now);
    tm* end = localtime(&now);

    string status;
    //obj auto
    //obj kunde
    // obj mitarbeiter
    float moneySum;
    string observation;

public:


};


#endif //PROIECTU_MARE_CARORDERING_H