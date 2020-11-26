#include <iostream>
#include <cstdlib>
using namespace std;

class BoundCheckIntArray {
    int *arr;
    int arrlen;
    BoundCheckIntArray(const BoundCheckIntArray& arr) {  }
    BoundCheckIntArray& operator=(const BoundCheckIntArray& arr) {  }
public:
    BoundCheckIntArray(int len) : arrlen(len) {
        arr=new int[len];
    }
    int& operator[] (int idx) {
        if(idx<0 || idx>=arrlen) {
            cout<<"Array index out of bound exception!"<<endl;
            exit(1);
        }
        return arr[idx];
    }
    int operator[] (int idx) const {
        if(idx<0 || idx>=arrlen) {
            cout<<"Array indx out of bound exception!"<<endl;
            exit(1);
        }
        return arr[idx];
    }
    int GetArrLen() const { return arrlen; }
    ~BoundCheckIntArray() {
        delete []arr;
    }
};

void ShowAllData(const BoundCheckIntArray& arr) {
    for(int i=0;i<arr.GetArrLen();i++)
        cout<<arr[i]<<endl;
}

main() {
    BoundCheckIntArray arr(5);
    for(int i=0;i<5;i++)
        arr[i]=(i+1)*11;
    
    ShowAllData(arr);
    return 0;
}