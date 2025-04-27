#include <iostream>
#include "bitwise.hpp"

int main() {
    auto bitwise = packCharacters();
    auto chars = unpackCharacters(bitwise);
    std::cout << bitwise << "\n" << chars << "\n";
    
    std::cin.get();
    
    return 0;
}