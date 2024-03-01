#include <iostream>
#include "complex.h"
using namespace std;

complex mul(const complex& a, const complex& b) {
   complex r;
   r.x = a.x * b.x - a.y * b.y;
   r.y = a.x * b.y + a.y * b.x;
   return r;
}


complex add(const complex& a, const complex& b) {
   complex r;
   r.x = a.x + b.x;
   r.y = a.y + b.y;
   return r;
}



void mandelbrot(const complex& c, unsigned int n, complex& z_n) {
    complex z_n_mul;
    z_n.x=0;
    z_n.y=0;
    for(unsigned int i=0; i<n; i++){
        z_n_mul=mul(z_n,z_n);
        z_n=add(z_n_mul,c);
    }

}


int main() {

  complex z_n;
  mandelbrot({1, 1}, 1, z_n);
  cout << z_n << '\n';
    return 0;
}