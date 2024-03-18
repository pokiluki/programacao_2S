int isto(const char s[]) {
    int length = 0;
    while (s[length]) {
        length++;
    }
    return length;
}



const char* longest(const char* pa[]){
    int indexf = 0;
    int i = 0;
    while (pa[i] != nullptr)
    {
        if(isto(pa[i]) >= isto(pa[indexf]))
        {
            indexf = i;
        }
        i++;
    }
    return pa[indexf];


}