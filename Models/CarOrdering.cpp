#include "CarOrdering.h"

CarOrdering::CarOrdering(float moneySum, std::string observation, User user, tm *begin, tm *end, Car car,
                         Employee employee1) : car(car) {
    //order type: reservation (begin is given by parameter)
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

CarOrdering::CarOrdering(float moneySum, std::string observation, User user, tm *end, Car car, Employee employee1)
        : car(car) {
    //order type: currently active (begin equals current time)
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


void CarOrdering::setOrderNr(int nr) {
    orderNumber = nr;
}

int CarOrdering::getOrderNr() const {
    return orderNumber;
}

void CarOrdering::setOrderDate(tm &time){
    orderDate = &time;
}

tm CarOrdering::getOrderDate() {
    return *orderDate;
}

void CarOrdering::setBegin(tm time) {
    begin = &time;
}

tm CarOrdering::getBegin() {
    return *begin;
}

void CarOrdering::setEnd(tm time) {
    end = &time;
}

tm CarOrdering::getEnd() {
    return *end;
}

void CarOrdering::setStatus(std::string status) {
    this->status = status;
}

std::string CarOrdering::getStatus() {
    return status;
}

void CarOrdering::setCar(Car car) {
    this->car = car;
}

Car CarOrdering::getCar() {
    return car;
}

void CarOrdering::setUser(User user) {
    this->user = user;
}

User CarOrdering::getUser() {
    return user;
}

void CarOrdering::setEmployee(Employee employee) {
    this->employee = employee;
}

Employee CarOrdering::getEmployee() {
    return employee;
}

void CarOrdering::setMoney(float sum) {
    moneySum = sum;
}

float CarOrdering::getMoney() {
    return moneySum;
}

void CarOrdering::setObservation(std::string observation) {
    this->observation = observation;
}

std::string CarOrdering::getObservation() {
    return observation;
}


void CarOrdering::changeStatus() {
    time_t now = time(0);
    tm *currentTime = localtime(&now);

    if (currentTime >= end)
        status = "Completed";


    else if (currentTime >= begin)
        status = "Order";

}

int CarOrdering::changeOrder(int orderNumber, Employee employee) {
    //if(employee == employee) // TODO - waiting for other developers
    if (status == "Completed") {
        return 0;
    } else {
        int option;
        std::cin >> option;

        switch (option) {
            case 1: {    //Admins

                break;
            }
            case 2: {

                break;
            }
        }
    }
}