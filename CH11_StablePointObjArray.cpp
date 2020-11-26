#include <iostream>
#include <cstdlib>
using namespace std;

class Point {
    int xpos, ypos;
public:
    Point(int x=0, int y=0) : xpos(x), ypos(y) {  }
    Point& operator=(const Point& ref) :xpos(ref.xpos), ypos(ref.ypos) { }
    friend ostream& operator<<(ostream &os, const Point &ref);
};

ostream& operator<<(ostream &os, const Point &ref) {
    os<<'['<<ref.xpos<<", "<<ref.ypos<<']'<<endl; //what's the matter?
    return os;
}

class BoundCheckPointArray {
    Point *arr;
    int arrlen;
    BoundCheckPointArray(const BoundCheckPointArray& arr) {  }
    BoundCheckPointArray& operator=(const BoundCheckPointArray& arr) {  }
public:
    BoundCheckPointArray(int len) : arrlen(len) {
        arr=new Point[len];
    }
    Point& operator[] (int idx) {
        if(idx<0 || idx>=arrlen) {
            cout<<"Array index out of bound exception!"<<endl;
            exit(1);
        }
        return arr[idx];
    }
    Point operator[] (int idx) const {
        if(idx<0 || idx>=arrlen) {
            cout<<"Array indx out of bound exception!"<<endl;
            exit(1);
        }
        return arr[idx];
    }
    int GetArrLen() const { return arrlen; }
    ~BoundCheckPointArray() {
        delete []arr;
    }
};

void ShowAllData(const BoundCheckPointArray& arr) {
    for(int i=0;i<arr.GetArrLen();i++)
        cout<<arr[i]<<endl;
}

main() {
    BoundCheckPointArray arr(3);
    arr[0]=Point(3,4);
    arr[1]=Point(5,6);
    arr[2]=Point(7,8);
    
    ShowAllData(arr);
    return 0;
}