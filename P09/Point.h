#ifndef __POINT_P__
#define __POINT_P__

class Point {
  public:
    Point();
    Point(int x, int y);

    int getY() const;
    int getX() const;
    

    void show() const;

  private:
    int x_, y_;
};

#endif