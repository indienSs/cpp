#include <iostream>
#include <sstream>

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

std::string unpackCharacters(unsigned int packed) {
    unsigned int mask{0xFF};
    std::stringstream res;

    res << static_cast<char>((packed >> 24) & mask);
    res << static_cast<char>((packed >> 16) & mask);
    res << static_cast<char>((packed >> 8) & mask);
    res << static_cast<char>(packed & mask);

    return res.str();
}