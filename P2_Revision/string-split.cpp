#include <iostream>
#include <string>
#include <vector>
#include "print_string.h"

void split(const string& s, vector<string>& v){

    int pos = 0;

    while (s.find(' ', pos) != string::npos)
    {
        int f_pos = s.find(' ',pos);
        v.push_back(s.substr(pos, f_pos - pos));
        pos = f_pos + 1;
    }

    string remaining = s.substr(pos);
    if(remaining.length() != 0){
    v.push_back(remaining);}

    
    for(long unsigned int i = 0; i < v.size(); i++){
        if(v[i] == ""){
            v.erase(v.begin() + i);
            i--;
        }
    }

}

int main(){ string s = "C++ LEIC FCUP FEUP";
  vector<string> v;
  split(s, v);
  print(v);
  return 0;}