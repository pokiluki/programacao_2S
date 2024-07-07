#include <iostream>
#include "print_array.h"
using namespace std;


int filter_unique(const int arr[], int size, int out[]){

    int count = 0;
    bool duplicate = false;
    for(int i = 0; i<size; i++){
        duplicate = false;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j] && i!=j){
                duplicate = true;
            }
        }
        if(duplicate == false){
            out[count] = arr[i];
            count++;
        }
    }
    return count;

}

int main(){
    

  const int size = 5;
  const int arr[size] = { 10, 30, 30, 30, 20 };
  int out[2] = { 0 };
  int r = filter_unique(arr, size, out); 
  print_array(out, r);
  return 0;
}