#include "CH13_BoundCheckTemplateArray.h"
#include "CH13_BoundCheckTemplateArray.cpp"
#include ""

main() {
    BoundCheckTemplateArray<int> arr1(5);
    BoundCheckTemplateArray<Point> arr2(5);
    BoundCheckTemplateArray<Point*> arr3(5);
}