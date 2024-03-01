#include<iostream>
#include<cmath>
using namespace std;


int solve_eq(int a, int b, int c, double& x1, double& x2){
    int delta = b*b - 4*a*c;
    if (delta < 0){
        x1 = x2 = abs(sqrt(-1));
        return 0;
    } else if (delta == 0){
        x1 = -b / (2.0*a);
        x2 = abs(sqrt(-1));
        return 1;
    } else {
        x2 = (-b + sqrt(delta)) / (2.0*a);
        x1 = (-b - sqrt(delta)) / (2.0*a);
        return 2;
    }

}
