#include <iostream>
#include <iomanip>

double calculatePi(int k) {
    double pi = 0.0;
    for (int n = 0; n <= k; n++) {
        double term = (n % 2 == 0) ? 1.0 : -1.0;
        pi += term / (2 * n + 1);
    }
    return 4 * pi;
}

int main() {
    int k, d;
    
    std::cin >> k >> d;

    double approximation = calculatePi(k);
    std::cout << std::fixed << std::setprecision(d) << approximation << std::endl;

    return 0;
}