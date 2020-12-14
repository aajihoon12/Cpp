#include <iostream>
using namespace std;

template <class T>
T Add(T num1, T num2) {
    cout<<"T Add(T num1, T num2)"<<endl;
    return num1+num2;
}

int Add(int num1, int num2) {
    cout<<"int Add(int num1, int num2)"<<endl;
    return num1+num2;
}

double Add(double num1, double num2) {
    cout<<"double Add(double num1, double num2)"<<endl;
    return num1+num2;
}

main() {
    cout<< Add(5, 7);
    cout<< Add(3.7, 7.5);
    cout<< Add<int>(5, 7);
    cout<< Add<double>(3.7, 7.5);
    return 0;
}