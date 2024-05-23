#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <algorithm>

using namespace std;

void count_words(const string& str, map<string, size_t>& count) {
    string lowercaseStr = str;
    transform(lowercaseStr.begin(), lowercaseStr.end(), lowercaseStr.begin(), ::tolower);

    istringstream iss(lowercaseStr);
    string word;
    while (iss >> word) {
        word.erase(remove_if(word.begin(), word.end(), [](char c) { return !isalnum(c) && c != '\''; }), word.end());

        count[word]++;
    }
}

void show_map(const map<string, size_t>& count) {
    cout << "[ ";
    for (const auto& e : count) {
        cout << e.first << ":" << e.second << ' ';
    }
    cout << "]\n";
}