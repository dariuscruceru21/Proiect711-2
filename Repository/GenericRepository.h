
#ifndef PROIECT711_2_GENERICREPOSITORY_H
#define PROIECT711_2_GENERICREPOSITORY_H

#include "string"
#include "vector"
#include "CarOrderRepository.h"
#include "fstream"
#include "sstream"
#include "iostream"


template<typename T>
class GenericRepository {
    friend class CarOrderRepository;
private:
    std::string filename;



public:



    GenericRepository(std::string filename);
    static std::vector<T> readFromCSV(const std::string &filename);
    static void writeToCSV(const std::string &filename, const std::vector<T> &objects);
    virtual std::string toCsv()const = 0;
    virtual void fromCsv(const std::string &csvLine) = 0;


};




#endif
