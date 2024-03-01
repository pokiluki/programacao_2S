#include <iostream>
#include "fraction.h"

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

fraction simplify(fraction f) {
    int commonDivisor = gcd(f.num, f.den);
    f.num /= commonDivisor;
    f.den /= commonDivisor;
    if (f.den < 0) {
        f.num *= -1;
        f.den *= -1;
    }
    return f;
}

fraction add(fraction a, fraction b) {
    fraction result;
    result.num = a.num * b.den + b.num * a.den;
    result.den = a.den * b.den;
    return simplify(result);
}

fraction mul(fraction a, fraction b) {
    fraction result;
    result.num = a.num * b.num;
    result.den = a.den * b.den;
    return simplify(result);
}

void printFraction(fraction f) {
    std::cout << f.num << "/" << f.den;
}
