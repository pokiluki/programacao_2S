#include <iostream>
#include "print_array.h"
using namespace std;

int filter_duplicates(const int a[], int n, int b[]){

    int count = 0;
    int last_copy = a[0];
    b[0] = a[0];
    count++;

    for(int i=1; i<n; i++){
        if(a[i] != last_copy){
            b[count] = a[i];
            count++;
        }
        last_copy = a[i];
    }
    return count;
}