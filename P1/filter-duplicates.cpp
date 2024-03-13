#include "print_array.h"

int filter_duplicates(const int a[], int n, int b[]){
    int counter=0;
    bool exists=false;
    for (int i = 0; i <= n; i++){
    
        for (int j = 0; j <=n; j++)
        {
            if (a[i]==b[j])
            {
                exists=true;
                break;
            }
            
        }
        
        if (exists==false){
        b[counter]=a[i];
                counter++;
       
        }
        else exists = false;
            
        
        
    }
    
    return counter;

}


int main(){ const int n = 12;
  const int a[n] = { 1, 2, 2, 3, 3, 3, 1, 1, 1, 2, 2, 3 };
  int b[n] = { 0 };
  int nf = filter_duplicates(a, n, b);
  print_array(b, nf); }