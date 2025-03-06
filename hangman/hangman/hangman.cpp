#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

const vector<string> WORDS = { "apple", "banana", "cherry", "grape", "orange" };
const int MAX_TRIES = 6;

void displayWord(const string& word, const vector<bool>& guessed) {
    for (size_t i = 0; i < word.length(); i++) {
        if (guessed[i]) {
            cout << word[i] << " ";
        }
        else {
            cout << "_ ";
        }
    }
    cout << endl;
}

bool isWordGuessed(const vector<bool>& guessed) {
    for (bool g : guessed) {
        if (!g) return false;
    }
    return true;
}
void displayHangman(int tries) {
    const vector<string> HANGMAN = {
        "\n\n\n\n\n\n=========" ,
        "\n\n\n\n\n  |\n=========" ,
        "\n\n\n\n  |\n  |\n=========" ,
        "\n\n\n  |\n  |\n  |\n=========" ,
        "\n\n  |\n  |\n  |\n  |\n=========" ,
        "\n  |\n  |\n  |\n  |\n  |\n=========" ,
        "  ____\n  |  |\n  |  O\n  | /|\\\n  |  |\n  | / \\\n  |\n========="
    };
    cout << HANGMAN[tries] << endl;
}

int main() {
    setlocale(0, "ru");
    srand(time(0));
    string word = WORDS[rand() % WORDS.size()];
    vector<bool> guessed(word.length(), false);
    int tries = 0;

    cout << "Добро пожаловать в игру 'Виселица'!" << endl;

    while (tries < MAX_TRIES) {
        displayHangman(tries);
        displayWord(word, guessed);
        cout << "Введите букву: ";
        char guess;
        cin >> guess;

        bool found = false;
        for (size_t i = 0; i < word.length(); i++) {
            if (word[i] == guess) {
                guessed[i] = true;
                found = true;
            }
        }

        if (!found) {
            tries++;
            cout << "Ошибка! Осталось попыток: " << (MAX_TRIES - tries) << endl;
        }

        if (isWordGuessed(guessed)) {
            cout << "Поздравляем! Вы угадали слово: " << word << endl;
            break;
        }
    }

    displayHangman(tries);

    if (tries == MAX_TRIES) {
        cout << "Вы проиграли! Загаданное слово: " << word << endl;
    }

    return 0;
}