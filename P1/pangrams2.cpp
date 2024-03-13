#include <iostream>
using namespace std;


bool pangram(const char s[], char m[]){
    int c = 0;
    char f[27];
    int n=0;
    bool flag = false, resul = false;
    while(s[n] != '\0'){
        if(s[n] >= 'a' && s[n] <= 'z'){
            f[s[n] - 'a'] = 1;
        }
        else if(s[n] >= 'A' && s[n] <= 'Z'){
            f[s[n] - 'A'] = 1;
        }
        n++;
    }

    for(int i = 0; i < 26; i++){

        if(f[i] == 0){
            m[c] = 'a' + i;
            flag = true;
            c++;
        }
    }
    
    if(flag == false){
        resul = true;
        m[0] = '\0';
    }
    else{
        resul = false;
    }

    return resul;



    
}


int main(){ char s[] = " Stu yZ abC GhI MnO pQr   ";
  char m[27] = { -1 };
  bool r = pangram(s, m);
  cout << '\"' << s << "\" "
       << boolalpha << r << " \"" << m << "\"\n"; 
       return 0;}