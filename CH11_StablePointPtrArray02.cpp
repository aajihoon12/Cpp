#include <iostream>
#include <cstdlib>
using namespace std;

class Point {
    int xpos, ypos;
public:
    Point(int x, int y) : xpos(x), ypos(y) {  }
    Point& operator=(const Point& ref) {
        xpos=ref.xpos;
        ypos=ref.ypos;
    }
    friend ostream& operator<<(ostream&, const Point&);
    friend ostream& operator<<(ostream&, const Point *);
};

ostream& operator<<(ostream& os, const Point &ref) {
    cout<<'['<<ref.xpos<<", "<<ref.ypos<<']'<<endl;
    return os;
}

ostream& operator<<(ostream& os, const Point* ref) { //Point* &이건 안되나?
    cout<<'['<<ref->xpos<<", "<<ref->ypos<<']'<<endl;
    return os;
}

typedef Point* POINT_PTR;

class BoundCheckPtrPointArray {
    POINT_PTR *arr;
    int arrlen;
    BoundCheckPtrPointArray(const BoundCheckPtrPointArray& ref) { }
    BoundCheckPtrPointArray& operator=(const BoundCheckPtrPointArray& ref) {  }
public:
    BoundCheckPtrPointArray(int len) : arrlen(len) {
        arr= new POINT_PTR[len];
    }
    POINT_PTR& operator[] (int idx) {
        if(idx<0 || idx>=arrlen) {
            cout<<"Array index out of boundary exception!"<<endl;
            exit(1);
        }
        return arr[idx];
    }
    POINT_PTR operator[] (int idx) const {
        if(idx<0 || idx>=arrlen) {
            cout<<"Array index out of boundary exception!"<<endl;
            exit(1);
        }
        return arr[idx];
    }
    int GetArrLen() const { return arrlen; }
    ~BoundCheckPtrPointArray() {
        delete []arr;
    }
};

main() {
    BoundCheckPtrPointArray arr(3);
    arr[0]=new Point(1, 2);
    arr[1]=new Point(3, 4);
    arr[2]=new Point(5, 6);

    for(int i=0;i<arr.GetArrLen();i++) 
       cout<<arr[i];
       //cout<<*(arr[i]);

    delete arr[0];
    delete arr[1];
    delete arr[2];
    return 0;
}



