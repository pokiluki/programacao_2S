#include <iostream>
using namespace std;

int main(){
    char a;
    cin >> a;
    if (a >= '0' && a <= '9'){
        cout << "DIGIT" << endl;
    }

    else if ((a>='a' && a<= 'z') || (a>='A' && a<= 'Z') )
    {
        cout << "LETTER" << endl;
    }
    else cout<<"OTHER" << endl;

    return 0;
    
}








