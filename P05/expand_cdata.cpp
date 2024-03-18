#include "cdata.h"

int* expand_cdata(const cdata a[], int n){
    int tam=0;
    int copy=0;
    
    for (int i = 0; i < n; i++)
    {
        tam+=a[i].count;
    }
    int *r = new int[tam+1];

    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<a[i].count;j++){
            r[copy]=a[i].value;
            copy++;
        }
    }
    
    return r;
}





int main(){ const int n = 3;
  const cdata a[] { { 3, 100 }, { 2, 200 }, { 1, 300 } };
  int* r = expand_cdata(a, n);
  print_array(r, 6);
  delete [] r; 
  return 0;}