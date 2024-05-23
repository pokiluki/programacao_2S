#include "Polygon.h"
#include <iostream>
#include <math.h>
#include <vector>

double distance(const Point &p1, const Point &p2) {
    return sqrt(pow(p1.getX() - p2.getX(), 2) + pow(p1.getY() - p2.getY(), 2));
}


Polygon::Polygon() {}

Polygon::Polygon(std::vector<Point> v) : points_(v) {}

bool Polygon::get_vertex(unsigned long i, Point &p) const {
    if (i > points_.size() or i < 1) return false;
    p = points_[i - 1];
    return true;
}

double Polygon::perimeter() const {
    double perimeter = 0;
    for (unsigned long i = 0; i < points_.size(); i++) {
        perimeter += distance(points_[i], points_[(i + 1) % points_.size()]);
    }
    return perimeter;
}

void Polygon::show() const {
    std::cout << "{";
    for (Point p : points_) p.show();
    std::cout << "}";
}

void Polygon::add_vertex(unsigned long i, const Point &p) {
    if (i > points_.size() + 1) return;
    points_.insert(points_.begin() + i - 1, p);
}