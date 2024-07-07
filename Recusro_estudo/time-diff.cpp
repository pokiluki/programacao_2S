#include <iostream>

using namespace std;

int main(){

    int h1, h2, m1, m2, dif;

    cin >> h1 >> m1 >> h2 >> m2;

    if(h1 == h2){
        dif = m2 -m1;
    }

    if(h1 < h2){
        dif = (h2-h1)*60 + m2-m1;
    }

    if(h1 > h2){
        dif = (h1-h2)*60 + m1-m2;
    }

    cout << dif << endl;
}
