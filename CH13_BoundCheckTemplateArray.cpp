#include <iostream>
#include <cstring>
#include <cstdlib>
#include "CH13_BoundCheckTemplateArray.h"
using namespace std;

/*template <class T>
class BoundCheckTemplateArray
*/
template <class T>  
BoundCheckTemplateArray<T>::BoundCheckTemplateArray(int len) :arrlen(len) {
    arr=new T[len];
}

template <class T>
T& BoundCheckTemplateArray<T>::operator[] (int idx) {
    if(idx<0 || idx>=len) {
        cout<<"Array index of Boundary exception!"<<endl;
        exit(1);
    }
    return arr[idx];
}

template <class T>
T BoundCheckTemplateArray<T>::operator[] (int idx) const {
    if(idx<0 || idx>=len) {
        cout<<"Array index of Boundary exception!"<<endl;
        exit(1);
    }
    return arr[idx];
}

template <class T>
int BoundCheckTemplateArray<T>::GetArrlen() const {
    return arrlen;
}

template <class T>
BoundCheckTemplateArray<T>::~BoundCheckTemplateArray() {
    delete []arr;
}