#pragma once

#include <iostream>
#include <string>
#include <vector>

class words
{
    words() {
        _WORDS[0] = "strawbery";
        _WORDS[1] = "apple";
        _WORDS[2] = "banana";
        _WORDS[3] = "grape";
        _WORDS[4] = "apple";
        _WORDS[5] = "orange";
    }
private:
    std::string _WORDS[5];
    void DisWord(std::string& word, const std::vector<bool>& guessed);

};