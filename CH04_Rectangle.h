#ifndef CH04_RECTANGLE_H__
#define CH04_RECTANGLE_H__

#include "CH04_Point.h"

class Rectangle {
    Point upLeft;
    Point lowRight;
public:
    Rectangle(const int &x1, const int &y1, const int &y1, const int &y2);
    void ShowRecInfo() const;
};

#endif