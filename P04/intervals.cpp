#include <iostream>
#include "interval.h"

int search_intervals(time_of_day t, const interval a[], int n, interval& u) {
    int total_duration = 0;
    bool found = false;
    
    u.start = t;
    u.end = t;
    
    for (int i = 0; i < n; i++) {
        if (a[i].start.h < t.h || (a[i].start.h == t.h && a[i].start.m <= t.m)) {
            if (a[i].end.h > t.h || (a[i].end.h == t.h && a[i].end.m > t.m)) {
                if (!found) {
                    u.start = a[i].start;
                    u.end = a[i].end;
                } else {
                    if (a[i].start.h < u.start.h || (a[i].start.h == u.start.h && a[i].start.m < u.start.m)) {
                        u.start = a[i].start;
                    }
                    if (a[i].end.h > u.end.h || (a[i].end.h == u.end.h && a[i].end.m > u.end.m)) {
                        u.end = a[i].end;
                    }
                }
                
                found = true;
            }
        }
    }
                int duration = (u.end.h - u.start.h) * 60 + (u.end.m - u.start.m);
                total_duration += duration;
    
    if (!found) {
        return 0;
    }
    
    return total_duration;
}


int main() { const int n = 5;
  const time_of_day t = { 15, 15 };
  const interval a[n] { { { 12, 30 }, { 14, 30 } },
                  { { 14, 30 }, { 15, 30 } },
                  { { 15, 10 }, { 16, 10 } },
                  { {  9, 30 }, { 15, 15 } },
                  { {  9, 45 }, { 15, 16 } } };
  interval u;
  int d = search_intervals(t, a, n, u);
  cout << d << ' ' << u << '\n'; return 0;}