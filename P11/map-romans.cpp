#include <string>
#include <vector>
#include <utility>
#include <iostream>

unsigned roman_to_arab(const std::string& roman) {
    std::vector<std::pair<char, unsigned>> roman_to_int = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    unsigned result = 0;
    unsigned prev_value = 0;

    for (int i = roman.size() - 1; i >= 0; i--) {
        char symbol = roman[i];
        unsigned value = 0;

        for (const auto& pair : roman_to_int) {
            if (pair.first == symbol) {
                value = pair.second;
                break;
            }
        }

        if (value >= prev_value) {
            result += value;
        } else {
            result -= value;
        }

        prev_value = value;
    }

    return result;
}

int main(){
    std::string r = "XV"; 
    std::cout << roman_to_arab(r) << '\n';
    return 0;
}