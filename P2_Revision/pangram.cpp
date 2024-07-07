#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool pangram(const string& s, string& m){
    vector<bool> find(26,false);

    for(long unsigned int i = 0; i < s.length(); i++){
        if (s[i] != ' '){
            find[tolower(s[i]) - 'a'] = true;
        }
    }

    for (long unsigned int i = 0; i < 26; i++){
        if (find[i] == false){
            m += (char)('a'+i);
        }
    }

    if (m == ""){
        return true;
    }
    
    return false;
}


int main(){
     string s = "";
  string m = "";
  bool r = pangram(s, m);
  cout << '\"' << s << "\" "
       << boolalpha << r << " \"" << m << "\"\n";
    return 0;
}