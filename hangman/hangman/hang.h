#pragma once


#include <iostream>
#include<vector>
#include <string>
class hang
{
private:
int _Stad = 0;
int _MaxTry;
const std::vector<std::string> _HANGMAN = {
    "\n\n\n\n\n\n=========" ,
    "\n\n\n\n\n  |\n=========" ,
    "\n\n\n\n  |\n  |\n=========" ,
    "\n\n\n  |\n  |\n  |\n=========" ,
    "\n\n  |\n  |\n  |\n  |\n=========" ,
    "\n  |\n  |\n  |\n  |\n  |\n=========" ,
    "  ____\n  |  |\n  |  O\n  | /|\\\n  |  |\n  | / \\\n  |\n========="
};

void NextStud(int tries);
public:



};

