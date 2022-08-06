#include <iostream>

int numberSyllables(std::string word) {
    int syllables = {};
    for (int i = 0; i < word.length(); i++) {
        if (static_cast<char>(word.at(i)) == '-') {
            syllables++;
        }
    }
    return syllables + 1;
}