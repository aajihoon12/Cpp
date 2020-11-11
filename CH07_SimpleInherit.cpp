#include <iostream>
using namespace std;

class Rectangle {
    int width;
    int height;
public:
    Rectangle(int w, int h) : width(w), height(h) { }
    void ShowAreaInfo() {
        cout<<"Area: "<<width*height<<endl; 
    }
};

class Square: public Rectangle {
public:
    Square(int side) : Rectangle(side, side) { }
};

main() {
    Rectangle rec(4,3);
    rec.ShowAreaInfo();

    Square sqr(7); 
    sqr.ShowAreaInfo();
    return 0;
}