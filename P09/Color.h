#ifndef __Color_C__
#define __Color_C__

class Color {
  public:
    static const Color RED, GREEN, BLUE, BLACK, WHITE;

    Color(unsigned char red, unsigned char green, unsigned char blue);
    Color(const Color &c);

    unsigned char red() const;
    unsigned char green() const;
    unsigned char blue() const;

    void invert();
    bool equal_to(const Color &other) const;
    

  private:
    unsigned char blue_;
    unsigned char red_;
    unsigned char green_;
    
};

#endif