#include "CarOrdering.h"

CarOrdering::CarOrdering(User user, tm* begin, tm* end){
    time_t now = time(0);
    this->user = user;
    orderDate = localtime(&now);
    this->status = "reservation";
    this->begin = begin;
    this->end = end;

}

CarOrdering::CarOrdering(User user, tm* end){
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
