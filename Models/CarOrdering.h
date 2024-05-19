#ifndef PROIECTU_MARE_CARORDERING_H
#define PROIECTU_MARE_CARORDERING_H

#include <ctime>
#include <iostream>
#include <list>
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
    void changeStatus();

    void setOrderNr(int nr);
    int getOrderNr() const;
    void setOrderDate(tm &time);
    tm getOrderDate();
    void setBegin(tm time);
    tm getBegin();
    void setEnd(tm time);
    tm getEnd();
    void setStatus(std::string status);
    std::string getStatus();
    void setCar(Car car);
    Car getCar();
    void setUser(User user);
    User getUser();
    void setEmployee(Employee employee);
    Employee getEmployee();
    void setMoney(float sum);
    float getMoney();
    void setObservation(std::string observation);
    std::string getObservation();

    //general function for writing an order's details
    void writeAll();

    //B.2 Nur Mitarbeiter durfen
    int changeOrder(int orderNumber,Employee employee);


    //B.4 Auflisten der Bestellungen
    void showAllOrdersInASpecificTimeInterval(std::list<CarOrdering> repository, tm start, tm end);
    static bool compareByTotalPrice(CarOrdering c1, CarOrdering c2)
    { return c1.moneySum < c2.moneySum; }

    CarOrdering searchOrderByOrderNumber(std::list<CarOrdering> repository, int orderNr);

    void totalSumOfATimeInterval(std::list<CarOrdering> repository, tm time, std::string type); //time is either a month or a year (ex. January or 2024)
                                                                                                //type is either month or year

};


#endif //PROIECTU_MARE_CARORDERING_H
