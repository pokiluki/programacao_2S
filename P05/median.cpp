#include <algorithm>

int median(const int a[], int n){
    int resul;
    int *tmp = new int[n];
    for (int i = 0; i < n; i++)
    {
        tmp[i]=a[i];
    }

    std::sort(tmp,tmp+n);

    if (n%2==0)
    {
        resul = (tmp[n/2]+tmp[n/2-1])/2;
    }else{
        resul = tmp[n/2];
    }
    
    delete [] tmp;
    return resul;
}