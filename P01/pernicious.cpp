#include <iostream>
#include <cmath>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int countOnes(int num) {
    int count = 0;
    while (num > 0) {
        if (num % 2 == 1) {
            count++;
        }
        num /= 2;
    }
    return count;
}

bool isPernicious(int num) {
    int onesCount = countOnes(num);
    return isPrime(onesCount);
}

int main() {
    int a, b;
    std::cin >> a >> b;


    for (int i = a; i <= b; i++) {
        if (isPrime(i) && isPernicious(i)) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}