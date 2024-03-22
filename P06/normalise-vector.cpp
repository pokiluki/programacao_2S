#include "print_vector.h"
#include <vector>


template <typename T>
void normalise(vector<T>& v, const T& min, const T& max){

    
    for(unsigned long int i=0; i<v.size(); i++){
        if(v[i]<min){
            v[i]=min;
        }
        else if(v[i]>max){
            v[i]=max;
        }
    }

}