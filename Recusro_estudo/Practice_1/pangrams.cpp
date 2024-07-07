#include <iostream>
using namespace std;

bool pangram(const char s[], char m[]){

    int alph[26] = {0};
    m[0] = 0;
    int i = 0;
    int count = 0;
    bool result = true;

    while(s[i] != 0){
        if(tolower(s[i])>='a' && tolower(s[i])<='z'){
            alph[tolower(s[i]) - 'a'] = 1;
        }
        i++;
    }

    for(int g = 0 ; g<26;g++){
        if(alph[g]==0){
            m[count] = 'a' + g;
            count++;
            result = false;
        }
    }

    return result;

}