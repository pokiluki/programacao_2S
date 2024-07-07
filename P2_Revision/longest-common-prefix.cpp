#include <iostream>
#include <vector>
#include <string>

std::string longest_prefix(const std::vector<std::string>& v){

    if(v.empty()){
        return "";
    }

    std::string prefix = v[0];

    for(unsigned long int i = 1; i < v.size(); i++){
        while(v[i].find(prefix) != 0){
            prefix = prefix.substr(0, prefix.length() - 1);
        }
    }

    return prefix;

}