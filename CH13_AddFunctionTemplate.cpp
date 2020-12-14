#include <iostream>
using namespace std;

template <class T>
T Add(T num1, T num2) {
    return num1+num2;
} 

main() {
    cout<< Add<int>(15,20);
    cout<< Add<double>(2.9, 3.7);
    cout<< Add<int>(3.2, 3.2);
    cout<< Add<double>(3.14, 2.75);
    return 0;
}
