#include <iostream>

class Fraction {
private:
    int numerator;
    int denominator;

    int gcd(int a, int b) {
        if (b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }

    void normalise() {
        int divisor = gcd(numerator, denominator);
        numerator /= divisor;
        denominator /= divisor;
        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
    }

public:
    Fraction() : numerator(0), denominator(1) {
        normalise();
    }

    Fraction(int num, int denom) : numerator(num), denominator(denom) {
        normalise();
    }

    int getNumerator() const {
        return numerator;
    }

    int getDenominator() const {
        return denominator;
    }

    Fraction sum(const Fraction& right) const {
        int num = numerator * right.denominator + right.numerator * denominator;
        int denom = denominator * right.denominator;
        return Fraction(num, denom);
    }

    Fraction sub(const Fraction& right) const {
        int num = numerator * right.denominator - right.numerator * denominator;
        int denom = denominator * right.denominator;
        return Fraction(num, denom);
    }

    Fraction mul(const Fraction& right) const {
        int num = numerator * right.numerator;
        int denom = denominator * right.denominator;
        return Fraction(num, denom);
    }

    Fraction div(const Fraction& right) const {
        int num = numerator * right.denominator;
        int denom = denominator * right.numerator;
        return Fraction(num, denom);
    }

    void write() const {
        std::cout << numerator << "/" << denominator;
    }
};