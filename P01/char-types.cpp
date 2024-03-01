#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int letterCount = 0;
    int digitCount = 0;
    int nonAlphaNumericCount = 0;

    for (int i = 0; i < n; i++) {
        char c;
        std::cin >> c;

        if (std::isalpha(c)) {
            letterCount++;
        } else if (std::isdigit(c)) {
            digitCount++;
        } else {
            nonAlphaNumericCount++;
        }
    }

    std::cout << letterCount << " " << digitCount << " " << nonAlphaNumericCount <<std::endl;


    return 0;
}