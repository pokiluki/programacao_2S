#include <string>
#include <vector>
#include "print_string.h"

void split(const string& s, vector<string>& v){
    size_t pos = 0;
    size_t len = s.length();

    while (pos < len) {
        size_t space_pos = s.find(' ', pos);

        if (space_pos == string::npos) {
            break;
        }

        string substring = s.substr(pos, space_pos - pos);
        if (substring.length() != 0) {
            v.push_back(substring);
        }

        pos = space_pos + 1;
    }

    string remaining = s.substr(pos);
    if(remaining.length() != 0){
    v.push_back(remaining);}
}