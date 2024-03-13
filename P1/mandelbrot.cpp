#include "complex.h"

complex mul(const complex& a, const complex& b) {
   complex r;
   r.real = a.real * b.real - a.img * b.img;
   r.img = a.real * b.img + a.img * b.real;
   return r;
}


complex add(const complex& a, const complex& b) {
   complex r;
   r.real = a.real + b.real;
   r.img = a.img + b.img;
   return r;
}






void mandel(complex c, int n, complex z[]){
    complex z_n_mul, z_n;
    z_n.real=0;
    z_n.img=0;
    for( int i=0; i<n; i++){
        
        if (i==0){
            z[i]=z_n;
            continue;
        }
        else{z_n_mul=mul(z_n,z_n);
        z_n=add(z_n_mul,c);
        z[i]=z_n;}
    }

    
}