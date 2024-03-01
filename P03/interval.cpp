#include <iostream>
#include "interval.h"
using namespace std;

bool isEarlier(const time_of_day& a, const time_of_day& b) {
    if (a.h < b.h) {
        return true;
    } else if ((a.h == b.h) and (a.m == b.m)) {
        return true;
    } else if ((a.h == b.h) and (a.m < b.m)) {
        return a.m<b.m;
    } else {
        return false;
    }
}

interval intersection(interval a, interval b) {
    interval result;
    if (isEarlier(a.end, b.start) || isEarlier(b.end, a.start)) {
        result.start = {0, 0};
        result.end = {0, 0};
    } else {
        result.start = isEarlier(a.start, b.start) ? b.start : a.start;
        result.end = isEarlier(a.end, b.end) ? a.end : b.end;
    }
    return result;
}

int main() {
    cout << intersection( { { 12, 30 }, { 14, 30 } },
                        { { 17, 30 }, { 18, 30 } } ) << '\n';
    
    	
cout << intersection( { { 12, 30 }, { 14, 30 } },
                      { { 14, 30 }, { 18, 30 } } ) << '\n';
    
    cout << intersection( { { 23,  0 }, { 23, 58 } },
                      { { 22, 45 }, { 23, 59 } } ) << '\n';
    return 0;


}
