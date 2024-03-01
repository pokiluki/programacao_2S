#include <iostream>
#include <cmath>
#include "complex.h"



void add(const complex& a, const complex& b, complex& r) {
   r.x = a.x + b.x;
   r.y = a.y + b.y;
}

void mul(const complex& a, const complex& b, complex& r) {
   r.x = a.x * b.x - a.y * b.y;
   r.y = a.x * b.y + a.y * b.x;
}

double norm(const complex& c) {
   return std::sqrt(c.x * c.x + c.y * c.y);
}

int main() {
   complex a { 0, 1 }, b { 2, 1}, s, m;
  add(a, b, s); 
  mul(a, b, m);
  cout << s << ' ' << m << ' ' << norm(s) << ' ' << norm(m) << '\n';

   return 0;
}
