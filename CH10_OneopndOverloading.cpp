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
    friend Point& operator--(Point& ref);
};
Point& operator--(Point& ref) {
    ref.xpos--;
    ref.ypos--;
    return ref;
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
    return 0;
}
