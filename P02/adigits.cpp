#include <iostream>
using namespace std;

int adigits(int a, int b, int c){
    int max1, min1, mid;
    max1 = max(a,b);
    max1 = max(max1,c);
    min1 = min(a,b);
    min1 = min(min1,c);
    mid = a+b+c-max1-min1;
    return max1*100+mid*10+min1;
}

