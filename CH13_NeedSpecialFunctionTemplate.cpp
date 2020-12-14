#include <iostream>
using namespace std;

template <class T>
T Max(T a, T b) {
    return a > b ? a : b;
}

main() {
    cout<< Max(11, 15);
    cout<< Max('T', 'Q');
    cout<< Max(3.5, 7.5);
    cout<< Max("Simple", "Best"); //상수형 메모리 주소 = const char * 반환
    return 0;
}