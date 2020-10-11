#include <iostream>
#include "CH04_Rectangle.h"
using namespace std;

Rectangle::Rectangle(const int &x1, const int &x2, const int &y1, const int &y2): upLeft(x1,y1), lowRight(x1, y2) {
//empty
}

void Rectangle::ShowRecInfo() const {
    cout<<"좌 상단: "<<upLeft.GetX()<<", ";
    cout<<upLeft.GetY()<<']'<<endl;
    cout<<"우 하단: "<<lowRight.GetX()<<", ";
    cout<<lowRight.GetY()<<']'<<endl<<endl;
}