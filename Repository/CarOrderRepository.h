
#ifndef PROIECTU_MARE_CARORDERREPOSITORY_H
#define PROIECTU_MARE_CARORDERREPOSITORY_H

#include "GenericRepository.h"
#include "../Models/CarOrdering.h"

#include <vector>

template <typename T>
class GenericRepository;

class CarOrderRepository{
    friend class GenericRepository<CarOrdering>;
private:
    std::vector<CarOrdering> repository;
public:
    CarOrderRepository();

    void saveProduct(CarOrdering &obj);
};


#endif //PROIECTU_MARE_CARORDERREPOSITORY_H
