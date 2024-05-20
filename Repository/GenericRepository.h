
#ifndef PROIECT711_2_GENERICREPOSITORY_H
#define PROIECT711_2_GENERICREPOSITORY_H

#include "string"
#include "vector"
#include "CarOrderRepository.h"


template<typename T>
class GenericRepository {
    friend class CarOrderRepository;
private:
    std::string filename;

public:
    std::vector<T> elements;//this contains an array with elements of classes,thats why we use template


    GenericRepository(std::string filename);
    void readFile(std::string filename);
    void deleteFromFile(std::string filename, int id);//deletes object with given id
    void updateFile(std::string filename, int id);//updates object with given id
    void addToFile(std::string filename);//adds a new object


};




#endif
