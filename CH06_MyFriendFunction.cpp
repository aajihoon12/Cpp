#include <iostream>
using namespace std;

class Point;

class PointOP {
    int opcnt;
public:
    PointOP() : opcnt(0) { }

    Point PointAdd(const Point&, const Point&); //선언부에서는 선언 자료형만 표기해도 됨.
    Point PointSub(const Point&, const Point&);
    ~PointOP() {
        cout<<"Operation times: "<<opcnt<<endl;
    }
};

class Point {
    int x;
    int y;
public:
    Point(const int &xpos, const int &ypos) : x(xpos), y(ypos) { }
    friend Point PointOP::PointAdd(const Point&, const Point&);
    friend Point PointOP::PointSub(const Point&, const Point&);
    friend void ShowPointPos(const Point&);
};

Point PointOP::PointAdd(const Point &p1, const Point &p2) {
    opcnt++;
    return Point(p1.x+p2.x, p1.y+p2.y);
}

Point PointOP::PointAdd(const Point &p1, const Point &p2) {
    opcnt++;
    return Point(p1.x-p1.y, p1.y-p2.y);
}

void ShowPointPos(const Point &p) {
    cout<<"x: "<<p.x<<", y: "<<p.y<<endl;
}

main() {
    PointOP op;
    Point p1(2,4);
    Point p2(4,8);

    ShowPointPos(op.PointAdd(p1, p2));
    ShowPointPos(op.PointSub(p2, p1));
    return 0;
}