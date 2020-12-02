#include <iostream>
using namespace std;

class Number {
    int num;
public:
    Number(int n=0) : num(n) {
        cout<<"Number(int n=0)"<<endl;
    }
    Number& operator=(const Number& ref) {
        cout<<"operator=()"<<endl;
        num=ref.num;
        return *this;
    }
    void ShowNumber() { cout<<num<<endl; }
};

main() {
    Number num;
    num=30;
    num.ShowNumber();
    return 0;
}