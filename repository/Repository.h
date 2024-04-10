

#ifndef PROIECT711_2_REPOSITORY_H
#define PROIECT711_2_REPOSITORY_H

#include <string>
#include <vector>
#include "C:\Users\Darius\OneDrive\Desktop\Proiect711-2\models\User.h"
#include "models/User.h"

class Repository {


private:
    std::string filename;

public:
    std::vector<User> readUser(std::string filename);
    std::vector<Employee> readEmployee(std::string filename)
};


#endif //PROIECT711_2_REPOSITORY_H
