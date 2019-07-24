#include <iostream>
#include <string>

int Hello() {
    std::cout << "Type your name" << std::endl;
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name << std::endl;
}