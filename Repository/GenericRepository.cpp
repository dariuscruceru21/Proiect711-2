//
// Created by Darius on 4/17/2024.
//

#include "GenericRepository.h"


template<typename T>
GenericRepository<T>::GenericRepository(std::string filename) {
    this->filename = filename;
}

//function to read from csv files and store in vectors
template<typename T>
std::vector<T> GenericRepository<T>::readFromCSV(const std::string &filename) {
    std::vector<T> objects;
    std::ifstream file(filename);

    if (!file.is_open()) {
        std::cerr << "Could not open the file: " << filename << std::endl;
        return objects;
    }

    std::string line;
    while (std::getline(file, line)) {
        T obj;
        obj.fromCSV(line);
        objects.push_back(obj);
    }

    file.close();
    return objects;
}

//function to write objects from type T in to csv file
template<typename T>
void GenericRepository<T>::writeToCSV(const std::string &filename, const std::vector<T> &objects) {
    std::ofstream file(filename);

    if (!file.is_open()) {
        std::cerr << "Could not open the file: " << filename << std::endl;
        return;
    }

    for (const auto &obj : objects) {
        file << obj.toCSV() << std::endl;
    }

    file.close();
}

