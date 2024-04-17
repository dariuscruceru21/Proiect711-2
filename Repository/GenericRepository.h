
#ifndef PROIECT711_2_GENERICREPOSITORY_H
#define PROIECT711_2_GENERICREPOSITORY_H

#include "string"
#include "vector"

template<typename T>
class GenericRepository {
private:
    std::string filename;

public:
    std::vector<T> elements;//this contains an array with elements of classes,thats why we use template

    GenericRepository();
    void readFile(std::string filename);
    void deleteFromFile(std::string filename, int id);//deletes object with given id
    void updateFile(std::string filename, int id);//updates object with goven id
    void addToFile(std::string filename);//adds a new object

};


#endif
