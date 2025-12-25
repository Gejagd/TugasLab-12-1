#include "string_vokal.h"
#include <iostream>
#include <cctype>

void printalfabet(const std::string& text) {
    for (int i = 0; i < text.length(); i++) {
        std::cout << text[i] << " ";
    }
    std::cout << std::endl;
}

int panjangvokal(const std::string& text) {
    return text.length();
}

int hitungvokal(const std::string& text) {
    int jumlahvokal = 0;

    for (char c : text) {
        c = std::tolower(static_cast<unsigned char>(c));
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {
            jumlahvokal++;
        }
    }
    return jumlahvokal;
}

std::string::size_type mencarisubstr(const std::string& text, const std::string& key) {
    return text.find(key);
}

std::string menggantisubstr(const std::string& text) {
    std::string str = text;
    str.replace(0, 3, "Log");
    return str;
}
