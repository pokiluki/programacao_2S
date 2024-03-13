#include <iostream>
using namespace std;


bool pangram(const char s[], char m[]){
    char alphabet[30] = {"abcdefghijklmnopqrstuvwxyz"};
    int n = 0;
    bool result=true,flag=false;
    for(int i =0;i<26;i++){
        for(int j=0;s[j]!='\0';j++){ 

            flag = false;
            if(alphabet[i] == s[j] || alphabet[i] == s[j] - 32){
                break;
            }
            if (s[j] == ' ')
            {
                continue;
            }
            
            if (flag == false){
                m[n] = alphabet[i];
                n++;
            }
        }
    }

    if (m[0] == -1){
        result = true;
        m[0] = '\0';
    }
    else{
        result = false;
    }

    return result;




}