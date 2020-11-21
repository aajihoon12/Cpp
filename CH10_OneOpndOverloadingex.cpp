#include <iostream>
using namespace std;

class Point {
    int xpos, ypos;
public:
    Point(int x=0, int y=0) : xpos(x), ypos(y) { }
    void ShowPosition() const {
        cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
    }
    Point& operator++() {
        xpos++;
        ypos++;
        return *this;
    }
    Point operator-() {
        Point pos(-xpos,-ypos);
        return pos;
    }
    friend Point& operator--(Point& ref);
    friend Point operator~(Point& ref);
};
Point& operator--(Point& ref) {
    ref.xpos--;
    ref.ypos--;
    return ref;
}
Point operator~(Point &ref) {
    return Point(~(ref.xpos), ~(ref.ypos)); 
}

main() {
    Point pos(1, 2);
    ++pos;
    pos.ShowPosition();
    --pos;
    pos.ShowPosition();

    ++(++pos);
    pos.ShowPosition();
    --(--pos);
    pos.ShowPosition();

    Point pos1=-pos;
    pos1.ShowPosition();
    (~pos1).ShowPosition();

    return 0;
}
