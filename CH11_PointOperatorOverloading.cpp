#include <iostream>
using namespace std;

class Number {
    int num;
public:
    Number(int n) : num(n) {  }
    void ShowData() { cout<<num<<endl; }

    Number * operator->() {
        return this;
    }
    Number & operator*() {
        return *this;
    }
};

main() {
    Number num(20);
    num.ShowData();

    (*num)=30; //Number(30) -> default operator=
    num->ShowData();
    (*num).ShowData();
    return 0;
}