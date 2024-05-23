#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void count_words(const string& str, vector<pair<string, size_t>>& count) {
    string word;
    size_t pos = 0;
    
    while (pos < str.length()) {
        while ((pos < str.length() && !isalpha(str[pos])) || (pos < str.length() && str[pos] == 39)) {
            pos++;
        }
        
        word.clear();
        while ((pos < str.length() && isalpha(str[pos])) || (pos < str.length() && str[pos] == 39)) {
            word += tolower(str[pos]);
            pos++;
        }
        
        auto it = find_if(count.begin(), count.end(), [&](const pair<string, size_t>& p) {
            return p.first == word;
        });
        
        if (it != count.end()) {
            it->second++;
        } else {
            count.push_back(make_pair(word, 1));
        }
    }
    
    sort(count.begin(), count.end(), [](const pair<string, size_t>& p1, const pair<string, size_t>& p2) {
        return p1.first < p2.first;
    });
}

void show_vector(const vector<pair<string, size_t>>& count) {
    cout << "[ ";
    for (const auto& e : count) {
        cout << e.first << ":" << e.second << ' ';
    }
    cout << "]\n";
}


int main(){
    string s = "If you want to buy  buy  if you don't want to buy  bye bye";
  vector<pair<string, size_t>> count;
  count_words(s, count);
  show_vector(count);
    return 0;
}