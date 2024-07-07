#include <iostream>
using namespace std;

int common_letters(const char a[], const char b[], char out[]){
    int count = 0;
    int alph[26] = {0};
    int alph2[26] = {0};
    int i = 0;
    int j = 0;

    while(a[i] != 0){
        if(tolower(a[i]) >= 'a' && tolower(a[i]) <= 'z'){
            alph[tolower(a[i])- 'a'] = 1;
        }
        i++;
    }

    while(b[j] != 0){
        if(tolower(b[j]) >= 'a' && tolower(b[j]) <= 'z'){
            alph2[tolower(b[j])- 'a'] = 1;
        }
        j++;
    }
    
    for(int g = 0; g<26; g++){
        if(alph[g] == alph2[g] && alph[g] == 1){
            out[count] = g + 'a';
            count++;
        }
    }
    return count;
}

int main(){
    char out[26+1];
  int n = common_letters("+LEIC", "c++", out);
  cout << n << " \"" << out << "\"\n";
  return 0;
}