#include <iostream>
using namespace std;

class Point {
    int xpos, ypos;
public:
    Point(int x=0, int y=0);
    void ShowPosition() const;
};


Point::Point(int x, int y) : xpos(x), ypos(y) {}
void Point::ShowPosition() const {
    cout<<'['<<xpos<<", "<<ypos<<']'<<endl;
}

template <class T>
void SwapData(T &data1, T &data2) {
    T temp;
    temp=data1;
    data1=data2;
    data2=temp;
}

main() {
    int num1=20, num2=30;
    SwapData(num1, num2);
    cout<<num1<<num2<<endl;

    Point pos1(20, 30);
    Point pos2(40, 50);
    SwapData(pos1, pos2);
    pos1.ShowPosition();
    pos2.ShowPosition();
    return 0;
}