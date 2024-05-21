#include "CarOrdering.h"

CarOrdering::CarOrdering(float moneySum, std::string observation, User user, tm *begin, tm *end, Car car,
                         std::list <CarOrdering> repository) : car(car) {
    //order type: reservation (begin is given by parameter)

    bool check = callAllValidationFunctions(car,repository,*begin,*end,"Reservation",user);  //requirement B5: Validations
    if (!check) { status = "Error"; return;}  //order is not created; in Repository class, object will not be added if status == Error

    time_t now = time(0);
    this->moneySum = moneySum;
    this->observation = observation;
    this->user = user;
    orderDate = localtime(&now);
    this->status = "Reservation";
    this->begin = begin;
    this->end = end;

    //specification B5.5: employee field is not specified
}

CarOrdering::CarOrdering(float moneySum, std::string observation, User user, tm *end, Car car, Employee employee1,
                         std::list <CarOrdering> repository)
        : car(car) {
    //order type: currently active (begin equals current time)

    bool check = callAllValidationFunctions(car,repository,*begin,*end,"Order",user);
    if (!check) { status = "Error"; return;}  //order is not created

    this->car = car;
    this->employee = employee1;
    this->moneySum = moneySum;
    this->observation = observation;
    time_t now = time(0);
    this->user = user;
    orderDate = localtime(&now);
    this->status = "Order";
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



void CarOrdering::writeAll() {
    std::cout<<orderNumber<<" ordered on "<<orderDate<<"; from "<<begin<<" until "<<end
        <<" (current status: "<<status<<"), total cost: "<<moneySum<<".\n";  //nu toate detaliile apar
    std::cout<<"Ordered by "<<user.getUserLastName()<<", handled by"<<employee.getUserLastName()<<"\n";
    std::cout<<"-->Observation: "<<observation<<"\n\n";
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

std::list <CarOrdering> CarOrdering::removeOrder(std::list<CarOrdering> repo, int orderNr) {
    std::list<CarOrdering>aux;
    for(CarOrdering obj: repo)
        if(obj.orderNumber != orderNr)
            aux.push_back(obj);
    return aux;
}

void CarOrdering::showAllOrdersInASpecificTimeInterval(std::list<CarOrdering> repository, tm start, tm end) {
    std::list<CarOrdering> orderList;
    for (CarOrdering obj: repository)
    {
        if (obj.begin >= &start && obj.end <= &end)   //object is to be written on the screen; add to orderList
        {
            orderList.push_back(obj);
        }
    }

    orderList.sort(CarOrdering::compareByTotalPrice);

    std::cout<<"All orders between the date of "<<&start<<" and "<<&end<<":\n";
    for (CarOrdering i: orderList)
    {
        std::cout<<orderNumber<<": price-"<<moneySum<<", car-"<<car.brand<<", user-"<<user.getUserLastName()<<", employee-"<<employee.getUserLastName();
    }
}

CarOrdering CarOrdering::searchOrderByOrderNumber(std::list<CarOrdering> repository, int orderNr) {
    for (CarOrdering obj: repository)
    {
        if (obj.orderNumber == orderNr)
            return obj;
    }
}

void CarOrdering::totalSumOfATimeInterval(std::list<CarOrdering> repository, tm time, std::string type) {
    if (type == "month")
        for (CarOrdering obj: repository)
        {
            if (obj.begin->tm_mon <= time.tm_mon && obj.end->tm_mon >= time.tm_mon) //if the month is included in the order's time interval
                std::cout<<orderNumber<<": price-"<<moneySum<<", car-"<<car.brand<<", user-"<<user.getUserLastName()<<", employee-"<<employee.getUserLastName();
        }
    else
        for (CarOrdering obj: repository)
        {
            if (obj.begin->tm_year >= time.tm_year && obj.end->tm_year <= time.tm_year) //if the time is included in a year
                std::cout<<orderNumber<<": price-"<<moneySum<<", car-"<<car.brand<<", user-"<<user.getUserLastName()<<", employee-"<<employee.getUserLastName();

        }
}


bool CarOrdering::callAllValidationFunctions(Car car, std::list<CarOrdering> repository, tm begin, tm end,
                                             std::string status, User user) {
    if (checkIfCarIsAlreadyUsed(car,repository,begin,end)) {std::cout<<"\nError: Car is already used on specified date; cannot create order\n"; return false;}

    if (!checkIfBeginIsSmallerOrEqualEnd(begin,end)) {std::cout<<"\nError: Begin time surpasses end time\n"; return false;}

    if (!userHasLessThanFiveReservations(user,status,repository)) {std::cout<<"\nError: number of reservations cannot exceed 5\n"; return false;}

    orderNumber = determineOrderNumber(repository);

    return true;
}

bool CarOrdering::checkIfCarIsAlreadyUsed(Car car, std::list<CarOrdering> repository, tm begin, tm end) {
    for (CarOrdering obj: repository)
    {
        if (obj.car.licensePlate == car.licensePlate)  //an order has been found using the same car; check if the new order wants to use it in an already occupied time period
            if (&end >= obj.begin && &end <= obj.end || &begin <= obj.end && &begin >= obj.begin)
                return true;  //car is used, cannot create order
    }
    return false;
}

bool CarOrdering::checkIfBeginIsSmallerOrEqualEnd(tm begin, tm end) {
    if (&begin <= &end) return true;
    return false;
}

bool CarOrdering::userHasLessThanFiveReservations(User user, std::string status, std::list<CarOrdering> repository) {
    if (status != "Reservation") return true;  //order is not a reservation, will not be problematic

    int ct=0;
    for (CarOrdering obj: repository)
    {
        if (obj.user.getUserEmail() == user.getUserEmail())  //cant have duplicate emails; users can be identified this way then
            ct++;
    }

    if (ct >= 5) return false;  //cannot make order; user reached maximum amount of reservations

    return true;
}

int CarOrdering::determineOrderNumber(std::list<CarOrdering> repository) {
    int maxi = 0;
    for (CarOrdering obj: repository)
        if (obj.orderNumber > maxi)
            maxi = obj.orderNumber;

    return maxi + 1;
}

