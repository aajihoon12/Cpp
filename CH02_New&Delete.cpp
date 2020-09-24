#include <iostream>
using namespace std;

typedef struct __point {
    int xpos;
    int ypos;
}Point;

Point& PntAdder(const Point &p1, const Point &p2) {
    Point * po = new Point;
    po->xpos = p1.xpos + p2.xpos;
    po->ypos = p1.ypos + p2.ypos;
    return *po;
}

main() {
    Point * po1 = new Point;
    po1->xpos = 5;
    po1->ypos = 10;

    Point * po2 = new Point;
    po2->xpos = 15;
    po2->ypos = 20;

    Point &po3 = PntAdder(*po1, *po2);
    cout<<"po3.xpos: "<<po3.xpos<<endl;
    cout<<"pos3.ypos: "<<po3.ypos<<endl;

    delete po1;
    delete po2;
    delete &po3;

    return 0; 
}