#include <iostream>
using namespace std;

class Point {
    int xpos, ypos;
public:
    Point(int x=0, int y=0) : xpos(x), ypos(y) { }
    void ShowPosition() const {
        cout<<"["<<xpos<<", "<<ypos<<']'<<endl;
    }
    Point& operator++() {
        xpos+=1;
        ypos+=1;
        return *this;
    }
    const Point operator++(int) {
        const Point retObj(*this);
        xpos+=1;
        ypos+=1;
        return retObj;
    }
    friend Point& operator--(Point &);
    friend const Point operator--(Point &, int);
};
Point& operator--(Point &ref) {
    ref.xpos--;
    ref.ypos--;
    return ref;
}
const Point operator--(Point &ref, int) {
    const Point retObj(ref);
    ref.xpos--;
    ref.ypos--;
    return retObj;
}

main() {
    Point pos(3, 5);
    Point cpy;
    cpy=pos--;
    cpy.ShowPosition();
    pos.ShowPosition();

    cpy=pos++;
    cpy.ShowPosition();
    pos.ShowPosition();
    return 0;
}