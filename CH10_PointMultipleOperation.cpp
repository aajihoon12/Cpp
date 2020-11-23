#include <iostream>
using namespace std;

class Point {
    int xpos, ypos;
public:
    Point(int x=0, int y=0) : xpos(x), ypos(y) { }
    void ShowPosition() const {
        cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
    }
    Point operator*(int times) {
        return Point(xpos*times, ypos*times);
    }
};

main() {
    Point pos(1,2);
    Point cpy;

    cpy=pos*3;
    cpy.ShowPosition();

    cpy=pos*3*2;
    cpy.ShowPosition():
    return 0;
}