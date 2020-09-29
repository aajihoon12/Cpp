#ifndef CH04_RECTANGLE_H__
#define CH04_RECTANGLE_H__

#include "CH04_Point.h"

class Rectangle {
    Point upLeft;
    Point lowRight;
public:
    bool InitMembers(const Point &ul, const Point &lr);
    void ShowRecInfo() const;
};

#endif