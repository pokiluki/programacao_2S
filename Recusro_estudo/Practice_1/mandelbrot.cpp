#include "complex.h"

complex mult(complex a, complex b){
    complex result;
    result.real = (a.real*b.real) - (a.img*b.img);
    result.img = (a.real*b.img) + (a.img*b.real);
    return result;
}

complex add(complex a, complex b){
    complex result;
    result.real = a.real + b.real;
    result.img = a.img + b.img;
    return result;
}


void mandel(complex c, int n, complex z[]){
    complex zero;
    zero.real = 0;
    zero.img = 0;
    z[0] = zero;
    for(int i = 1; i<n; i++){
        z[i] = add(mult(z[i-1],z[i-1]),c);
    }
}