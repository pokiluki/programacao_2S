#include <list>
#include <map>
#include <string>
#include <climits>

std::string cat_keys(std::list<std::map<std::string, unsigned>> lst) {
    std::string result;
    unsigned minVal = UINT_MAX;
    std::map<std::string, unsigned> minMap;

    for (const auto& m : lst) {
        for (const auto& pair : m) {
            if (pair.second < minVal) {
                minVal = pair.second;
                minMap = m;
            }
        }
    }

    for (const auto& pair : minMap) {
        result += pair.first;
    }

    return result;
}