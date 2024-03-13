#include <iostream>
using namespace std;

int test_func(int a, int b){
    return a + b;
}

int main() {

    std::cout << test_func(1, 2);
    std::cout << "Hello, World!" << std::endl;
    return 0;

}
