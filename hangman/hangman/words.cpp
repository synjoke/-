#include "words.h"

void words::DisWord(std::string& word, const std::vector<bool>& guessed)
{
    for (size_t i = 0; i < word.length(); i++) {
        if (guessed[i]) {
            std::cout << word[i] << " ";
        }
        else {
            std::cout << "_ ";
        }
    }
    std::cout << std::endl;
}