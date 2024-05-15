//
// Created by phili on 17/04/2024.
//

#include "CarOrderRepository.h"
#include <fstream>
#include <iostream>

//---Formatul unui fisier: (per linie)---
//orderNumber,orderDate,begin,end,status,carID,userID,employeeID,moneySum,observation

//files must be in .csv format


CarOrderRepository::CarOrderRepository() {

}
#include <vector>
template<typename T>
void GenericRepository<T>::readFile(std::string filename) {
    std::ifstream f(filename);

    //nu putem folosi atributu privat

}


template<typename T>
void GenericRepository<T>::addToFile(std::string filename) {

}


template<typename T>
void GenericRepository<T>::updateFile(std::string filename, int id) {

}


template<typename T>
void GenericRepository<T>::deleteFromFile(std::string filename, int id) {

}