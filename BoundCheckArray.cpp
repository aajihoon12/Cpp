#include "BankingCommonDec1.h"
#include "BoundCheckArray.h"

template <class T>
BoundCheckArray<T>::BoundCheckArray(int len) : arrlen(len) {
    arr=new T[len];
}

template <class T>
T& BoundCheckArray<T>::operator[] (int idx) {
    if(idx<0 || idx>=arrlen) {
       cout<<"Array index out of Boundary exception!"<<endl;
        exit(1);
    }
        return arr[idx];
}

template <class T>
T BoundCheckArray<T>::operator[] (int idx) const {
    if(idx<0 || idx>=arrlen) {
        cout<<"Array index out of Boundary exception!"<<endl;
        exit(1)
     }
   return arr[idx];
}

template <class T>
int BoundCheckArray<T>::GetArrLen() const {
    return arrlen;
}
    
template <class T>
BoundCheckArray<T>::~BoundCheckArray() {
    delete []arr;
}



