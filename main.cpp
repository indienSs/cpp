#include <iostream>
#include "./headers/arythmetic.hpp"
#include "./headers/bitwise.hpp"

int main() {
    double index = bodyWeightIndex(184, 80);
    auto bitwise = packCharacters();
    std::cout << bitwise << "\n";
    std::cout << index << "\n";
    std::cin.get();
    std::cin.get();
    return 0;
}