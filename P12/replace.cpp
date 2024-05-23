#include <map>
#include <string>

void replace(const std::map<char, char>& r, std::string& s) {
    for (char& c : s) {
        if (r.count(c) > 0) {
            c = r.at(c);
        }
    }
}