#include <iostream>

int main(){
    int x = 10;
int& xRef = x;
std::cout << ++x << " - ";
std::cout << xRef++ << " - ";
std::cout << x << " - " << (x==xRef) << std::endl;
return 0;
}

