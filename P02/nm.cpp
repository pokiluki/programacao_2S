unsigned long next_mersenne(unsigned long n){
    unsigned long m=0;
    unsigned long resul=0;
    while (resul<=n)
    {
        resul = 0;
        resul = (m*m)-1;
        m++;
    }
    return resul;
}

