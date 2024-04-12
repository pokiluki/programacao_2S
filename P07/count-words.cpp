#include <iostream>
#include <fstream>
#include <string>


int count(const std::string& fname, const std::string& word) {
    std::ifstream file(fname);
    std::string wordInFile;
    int count = 0;
    std::string word2=word;

    for(char& c : word2) {
        c = tolower(c);
    }

    while (file >> wordInFile) {
        std::string s;
        for (char&c : wordInFile) {
            c = tolower(c);
        }


        if (wordInFile == word2) {
            count++;
        }
    }

    return count;
}
