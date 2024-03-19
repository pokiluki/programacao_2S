#include <string>
using namespace std;

bool pangram(const string& s, string& m){

    char alpha[27]={0};
    for(long unsigned int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z'){
            alpha[s[i]-'a']++;
        }
        else if(s[i]>='A' && s[i]<='Z'){
            alpha[s[i]-'A']++;
        }
    }

    for (int i = 0; i<26; i++){
        if (alpha[i] == 0){
            m += (char)('a'+i);
        }
    }

    for(int i = 0; i<26; i++){
        if (alpha[i] == 0) return false;
    }
    return true;
}