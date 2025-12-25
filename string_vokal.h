#ifndef STRING_VOKAL_H
#define STRING_VOKAL_H

#include <string>

void printalfabet(const std::string& text);
int panjangvokal(const std::string& text);
int hitungvokal(const std::string& text);
std::string::size_type mencarisubstr(
    const std::string& text,
    const std::string& key
);
std::string menggantisubstr(const std::string& text);


#endif