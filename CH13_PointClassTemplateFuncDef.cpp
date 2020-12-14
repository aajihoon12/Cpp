#include <iostream>
using namespace std;

template <typename T>
class Point {
    T xpos, ypos;
public:
    Point(T x=0, T y=0);
    void ShowPosition() const;
};

template <typename T>
Point<T>::Point(T x, T y) : xpos(x), ypos(y) { }

template <typename T>
void Point<T>::ShowPosition() const {
    cout<<'['<<xpos<<", "<<ypos<<']'<<endl;
}

main() {
    Point<int> pos1(3, 4);
    Point<double> pos2(3.3, 4.4);
    Point<char> pos3('a', 'b');
    return 0;
}



