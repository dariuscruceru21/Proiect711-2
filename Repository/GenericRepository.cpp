//
// Created by Darius on 4/17/2024.
//

#include "GenericRepository.h"


template<typename T>
GenericRepository<T>::GenericRepository(std::string filename) {
    this->filename = filename;
}

template<typename T>
void GenericRepository<T>::readFile(std::string filename) {
    this->elements = doc(this->filename).load();
}