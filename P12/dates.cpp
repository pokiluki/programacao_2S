#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include "Date.h"


bool operator<(const Date& lhs, const Date& rhs) {
    if (lhs.getYear() != rhs.getYear()) {
        return lhs.getYear() < rhs.getYear();
    } else if (lhs.getMonth() != rhs.getMonth()) {
        return lhs.getMonth() < rhs.getMonth();
    } else {
        return lhs.getDay() < rhs.getDay();
    }
}

std::ostream& operator<<(std::ostream& os, const Date& date) {
    os << std::setfill('0') << std::setw(4) << date.getYear() << "/"
         << std::setw(2) << date.getMonth() << "/" << std::setw(2) << date.getDay();
    return os;
}

int main() {
    std::vector<Date> dates;

    std::sort(dates.begin(), dates.end());

    for (const auto& d : dates) {
        std::cout << d << std::endl;
    }

    return 0;
}