unsigned long bc(unsigned long n, unsigned long k){
    if (k == 0 || k == n) return 1;
    return bc(n-1, k-1) + bc(n-1, k);
}




unsigned long bell(unsigned long n){
    unsigned long k= 0;
    if(n==1 || n==0) return 1;
    else{
        n = n-1;
        for (unsigned long i = 0; i <= n; i++){
            k += bc(n, i)*bell(i);
        }
        return k;
    } 
}