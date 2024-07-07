#ifndef __CONE_H__
#define __CONE_H__


#include "Solid3D.h"
#include <cmath>

class Cone : public Solid3D{
    public:
    Cone(const point& c, double r, double h) : Solid3D(c){
        c_ = c;
        r_ = r;
        h_ = h;
    }

    double radius() const{
        return r_;
    }

    double height() const{
        return h_;
    }

    double volume() const{
        return M_PI * r_ * r_ * h_/3;
    }


    private:
    double r_,h_;
    point c_;

};


#endif