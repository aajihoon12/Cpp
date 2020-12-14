#include <iostream>
using namespace std;

template <class T>
class Point { //Point<T>
    T xpos, ypos;
public:
    Point(T x=0, T y=0) : xpos(x), ypos(y) { }
    void ShowPosition() const {
        cout<<'['<<xpos<<", "<<ypos<<']'<<endl;
    }
};

main() {
    Point<int> pos1(3,4);
    pos1.ShowPosition();

    Point<char> pos2(2.4, 3.6);
    pos2.ShowPosition();
    return 0;
}