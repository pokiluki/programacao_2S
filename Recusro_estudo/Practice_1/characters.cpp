#include <iostream>
using namespace std;

int main(){
    char n;
    cin >> n;

    if(tolower(n) >= 'a' && tolower(n) <= 'z'){
        cout << "LETTER" << endl;
    }

    else if(n >= '0' && n <= '9'){
        cout << "DIGIT" << endl;
    }

    else{
        cout << "OTHER" << endl;
    }

    return 0;
}