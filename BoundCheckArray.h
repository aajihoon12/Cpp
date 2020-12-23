#ifndef __BOUNDCHECK_ARRAY__
#define __BOUNDCHECK_ARRAY__

template <class T>
class BoundCheckArray {
    T* arr;
    int arrlen;

    BoundCheckArray(const BoundCheckArray& carr) {}
    BoundCheckArray& operator= (const BoundCheckArray& carr) {}
public:
    BoundCheckArray(int len);
    T& operator[] (int idx);
    T operator[] (int idx) const;
    int GetArrLen() const;
    ~BoundCheckArrary();
};

#endif