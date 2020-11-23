#include <iostream>
using namespace std;

class Point {
    int xpos, ypos;
public:
    Point(int x=0, int y=0) : xpos(x), ypos(y) { }
    void ShowPosition() const {
        cout<<'['<<xpos<<", "<<ypos<<']'<<endl;
    }
    friend ostream& operator<<(ostream&, const Point&);
    friend istream& operator>>(istream&, const const Point&);
};

ostream& operator<<(ostream& os, const Point &pos) {
    os<<'['<<pos.xpos<<", "<<pos.ypos<<endl;
    return os;
}

istream& operator>>(istream& is, const Point &pos) {
    is>>pos.xpos;
    is>>pos.ypos;
    return is;
}

main() {
    Point pos1;
    cout<<"x, y ��ǥ ������ �Է�: ";
    cin>>pos1;
    cout<<pos1;

    Point pos2;
    cout<<"x, y ��ǥ ������ �Է�: ";
    cin>>pos2;
    cout<<pos2;
    return 0;
}