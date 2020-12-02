#include <iostream>
using namespace std;

class Number {
    int num;
public:
    Number(int n=0) : num(n) {
        cout<<"Number(int n=0)"<<endl;
    }
    operator int () {
        return num;
    }
    Number& operator=(const Number& ref) {
        cout<<"operator=()"<<endl;
        num=ref.num;
        return *this;
    }
    void ShowNumber() { cout<<num<<endl; }
};

main() {
    Number num1;
    num1=30;
    Number num2=num1+20;
    num2.ShowNumber();
    return 0;
}