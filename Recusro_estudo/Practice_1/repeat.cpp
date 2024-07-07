using namespace std;

int isto(const char s[]){
    int lenght = 0;
    int i = 0;
    while(s[i]){
        lenght++;
        i++;
    }
    return lenght;
    }

char* repeat(const char str[], int n){
    
    int lenght = isto(str);
    int finalLenght = (lenght * n) + 1;
    char* result = new char[finalLenght];
    int pos = 0;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<lenght; j++){
            result[pos] = str[j];
            pos++;
        }
    }
    result[pos] = '\0';
    return result;
}