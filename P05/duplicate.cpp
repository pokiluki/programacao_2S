int isto(const char s[]) {
    int length = 0;
    while (s[length]) {
        length++;
    }
    return length;
}



char* duplicate(const char s[]){

    char *final = new char[isto(s) + 1];
    for (int i = 0; i < isto(s); i++)
    {
        final[i] = s[i];
    }
    
    final[isto(s)] = '\0';
    return final;


}