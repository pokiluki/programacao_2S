#include "print_array.h"

int filter_duplicates(const int a[], int n, int b[]){
    int counter=0;
    for (int i = 0; i < n; i++)
    {
        if (i != n-1){
            if (a[i]!=a[i+1])
            {
                b[counter]=a[i];
                counter++;
            }
        }
        else if (i==n-1)
        {
            b[counter]=a[i];
            counter++;
        }

        
    }
    
    return counter;


}

int main(){ const int n = 12;
  const int a[n] = { 1, 2, 2, 3, 3, 3, 1, 1, 1, 2, 2, 3 };
  int b[n] = { 0 };
  int nf = filter_duplicates(a, n, b);
  print_array(b, nf); 
  return 0;}

