#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

template<typename T1, typename T2>
class Pair {
public:
    Pair(const T1& first, const T2& second) : first_(first), second_(second) {}

    T1 get_first() const {
        return first_;
    }

    T2 get_second() const {
        return second_;
    }

    void show() const {
        std::cout << "{" << first_ << "," << second_ << "}";
    }

private:
    T1 first_;
    T2 second_;
};

template<typename T1, typename T2>
void sort_by_first(std::vector<Pair<T1, T2>>& v) {
    std::sort(v.begin(), v.end(), [](const Pair<T1, T2>& p1, const Pair<T1, T2>& p2) {
        return p1.get_first() < p2.get_first();
    });
}

template<typename T1, typename T2>
void sort_by_second(std::vector<Pair<T1, T2>>& v) {
    std::sort(v.begin(), v.end(), [](const Pair<T1, T2>& p1, const Pair<T1, T2>& p2) {
        return p1.get_second() < p2.get_second();
    });
}

template<typename T1, typename T2>
void show(const std::vector<Pair<T1, T2>>& v) {
    std::cout << "{";
    for (const auto& pair : v) {
        pair.show();
    }
    std::cout << "}" << std::endl;
}

