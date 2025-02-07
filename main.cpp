#include <iostream>
#include "./headers/bitwise.hpp"

int main() {
    auto bitwise = packCharacters();
    auto chars = unpackCharacters(bitwise);
    std::cout << bitwise << "\n" << chars << "\n";
    
    std::cin.get();
    
    return 0;
}