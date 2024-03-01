#include <iostream>
using namespace std;


void advance(int delta, int& d, int& m, int& y){

    int daysinmonth2;
    if (m == 2){
        if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)){
            daysinmonth2 = 29;
        } else {
            daysinmonth2 = 28;
        }
    } else if (m == 4 || m == 6 || m == 9 || m == 11){
        daysinmonth2 = 30;
    } else {
        daysinmonth2 = 31;
    }
    
    d += delta;
    while (d > daysinmonth2){
        d -= daysinmonth2;
        m++;
        if (m > 12){
            m = 1;
            y++;
        }
        if (m == 2){
        if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)){
            daysinmonth2 = 29;
        } else {
            daysinmonth2 = 28;
        }
    } else if (m == 4 || m == 6 || m == 9 || m == 11){
        daysinmonth2 = 30;
    } else {
        daysinmonth2 = 31;
    }

    }

    return;
}