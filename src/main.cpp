#include "../include/string_vokal.h"
#include <iostream>
#include <string>

int main() {
    std::string inputTeks;

    std::cout << "Masukkan 1 Kalimat: " << std::endl;
    std::getline(std::cin, inputTeks);

    printalfabet(inputTeks);

    std::cout << "Panjang: " << panjangvokal(inputTeks) << std::endl;
    std::cout << "Jumlah vokal: " << hitungvokal(inputTeks) << std::endl;

    auto pos = mencarisubstr(inputTeks, "a");
    if (pos != std::string::npos) {
        std::cout << "Posisi Substring: " << pos << std::endl;
    }
    
    std::cout << menggantisubstr(inputTeks) << std::endl;

    return 0;
}