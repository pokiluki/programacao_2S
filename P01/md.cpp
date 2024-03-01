#include <iostream>

int main(){
    int i, x1, x2, y1, y2, d=0;
    std:: cin >> i;
    std:: cin >> x1 >> y1;
    --i;
    while(i)
    {
        i--;
        std:: cin >> x2 >> y2;
        d += abs(x1-x2) + abs(y1-y2);
        x1 = x2;
        y1 = y2;

    }
    std:: cout << d;
    return 0;
}