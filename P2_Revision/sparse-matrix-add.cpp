#include "smatrix.h"

void sum(const smatrix& a, const smatrix& b, smatrix& r){


    size_t i = 0;
    size_t j = 0;

    while (i < a.size() && j < b.size()) {
        if (a[i].row < b[j].row || (a[i].row == b[j].row && a[i].col < b[j].col)) {
            r.push_back(a[i]);
            i++;
        } else if (a[i].row > b[j].row || (a[i].row == b[j].row && a[i].col > b[j].col)) {
            r.push_back(b[j]);
            j++;
        } else {
            int sum = a[i].value + b[j].value;
            if (sum != 0) {
                sm_entry entry;
                entry.row = a[i].row;
                entry.col = a[i].col;
                entry.value = sum;
                r.push_back(entry);
            }
            i++;
            j++;
        }
    }

    while (i < a.size()) {
        r.push_back(a[i]);
        i++;
    }

    while (j < b.size()) {
        r.push_back(b[j]);
        j++;
    }
    
}