#include <iostream>
using namespace std;

template <class T>
class Point {
    T xpos, ypos;
public:
    Point(T x=0, T y=0);
    void ShowPosition() const;

    friend Point<int> operator+ (const Point<int>&);
    friend ostream& operator<< (ostream&, const Point<int>&);
};

Point<int> operator+ (const Point<int>& pos1) {
    return Point<int>(xpos+pos1.xpos, ypos+pos1.ypos);
}