#include <iostream>

int reverseNumber(int num) {
    int reversedNum = 0;
    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    return reversedNum;
}

int main() {
    int num;
    std::cin >> num;
    int reversedNum = reverseNumber(num);
    std::cout << reversedNum << std::endl;
    return 0;
}