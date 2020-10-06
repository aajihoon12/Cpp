#include <iostream>
using namespace std;

class Point {
private:
    int xpos, ypos;
public:
    void Init(int x, int y) {
        xpos=x; ypos=y;
    }
    void ShowPointInfo() const {
        cout<<"["<<xpos<<', '<<ypos<<']'<<endl;
    }
};

class Circle {
private:
    Point po;
    int radius;
public:
    void InitCircle(int x, int y, int r) {
        po.Init(x, y);
        radius = r;
    }
    void ShowCircleInfo() const {
        cout<<"radius: "<<radius<<endl;
        po.ShowPointInfo();
    }
};

class Ring {
private:
    Circle innerC;
    Circle outterC;
public:
    void InitRing(int x1, int y1, int r1, int x2, int y2, int r2);
    void ShowRingInfo() const {
        cout<<"Inner Circle Info..."<<endl;
        innerC.ShowCircleInfo();
        cout<<"Outter Circle Info..."<<endl;
        outterC.ShowCircleInfo();
    }
};

main() {
    Ring ring;
    ring.InitRing(1, 1, 4, 2, 2, 9);
    ring.ShowRingInfo();
    return 0;
}