#include <iostream>
using namespace std;


bool pangram(const char s[], char m[]){
    int j=0; 
    m[0]=0;
    int n =0;
    char f[27]={0};
    while(s[j] != '\0'){
        if(s[j] >= 'a' && s[j] <= 'z'){
            f[s[j] - 'a'] = 1;
        }
        else if(s[j] >= 'A' && s[j] <= 'Z'){
            f[s[j] - 'A'] = 1;
        }
        j++;
    }
    for(int i = 0; i < 26; i++){
        if(f[i] == 0){
            m[n] = 'a' + i;
            n++;
        }

        
    }

  
    

    for(int i = 0; i < 26; i++){
        if(m[i] >= 'a' && m[i] <= 'z'){
            return false;
        }
    
    }
    return true;


}

int main(){ char s[] = "A quick brown fox jumps over a classy dog";
  char m[27] = { -1 };
  bool r = pangram(s, m);
  cout << '\"' << s << "\" "
       << boolalpha << r << " \"" << m << "\"\n";
     return 0;
     }
