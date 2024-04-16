#include "CarOrdering.h"

CarOrdering::CarOrdering(float moneySum, std::string observation,User user, tm *begin, tm *end, Car car,Employee employee1) : car(car) {
    time_t now = time(0);
    this->employee = employee1;
    this->moneySum = moneySum;
    this->observation = observation;
    this->user = user;
    orderDate = localtime(&now);
    this->status = "reservation";
    this->begin = begin;
    this->end = end;

}

CarOrdering::CarOrdering(float moneySum, std::string observation, User user, tm *end, Car car,Employee employee1) : car(car) {
    this->car = car;
    this->employee = employee1;
    this->moneySum = moneySum;
    this->observation = observation;
    time_t now = time(0);
    this->user = user;
    orderDate = localtime(&now);
    this->status = "order";
    this->begin = localtime(&now);
    this->end = end;

}

tm CarOrdering::getOrderDate() {
    return *orderDate;
}

void CarOrdering::changeStatus() {
    time_t now = time(0);
    tm *currentTime = localtime(&now);

    if(currentTime >= end )
        status = "Completed";
        

    else if(currentTime >= begin )
            status = "Order";

}

int CarOrdering::changeOrder(int orderNumber,Employee employee) {
    //if(employee == employee) // TODO
    if (status == "Completed") {
        return 0;
    }
    else
    {
        int option;
        std::cin>>option;

        switch(option)
        {
            case 1:{

                break;
            }
            case 2:{

                break;
            }
        }
    }
}