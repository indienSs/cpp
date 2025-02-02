#include <iostream>
#include <cstdint>

unsigned int packCharacters() {
    unsigned int res{};
    unsigned char ch;
    std::cout << "First char: ";
    std::cin >> ch;
    res |= ch;
    res <<= 8;
    std::cout << "Second char: ";
    std::cin >> ch;
    res |= ch;
    res <<= 8;
    std::cout << "Third char: ";
    std::cin >> ch;
    res |= ch;
    res <<= 8;
    std::cout << "Fourth char: ";
    std::cin >> ch;
    res |= ch;
    std::flush(std::cout);
    return res;
}

unsigned int unpackCharacters() {
    return 0;
}