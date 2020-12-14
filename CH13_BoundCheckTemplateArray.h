#ifndef __CH13_BOUNDCHECK_TEMPLATEARRAY_H__
#define __CH13_BOUNDCHECK_TEMPLATEARRAY_H__

template <class T>
class BoundCheckTemplateArray {
    T* arr;
    int arrlen;
    BoundCheckTemplateArray(const BoundCheckTemplateArray& ref) {}
    BoundCheckTemplateArray& operator=(const BoundCheckTemplateArray& ref) {}
public:
    BoundCheckTemplateArray(int len);
    T& operator[] (int idx);
    T operator[] (int idx) const;
    int GetArrlen() const;
    ~BoundCheckTemplateArray();
};

#endif