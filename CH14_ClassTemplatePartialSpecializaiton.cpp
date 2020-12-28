#include <iostream>
using namespace std;

template <class T1, class T2>
class MySimple {
public:
    void WhoAreYou() const {
        cout<<"size of T1: "<<sizeof(T1)<<endl;
        cout<<"size of T2: "<<sizeof(T2)<<endl;
        cout<<"<class T1, class T2>"<<endl;
    }
};

template <>
class MySimple<int, double> {
public:
    void WhoAreYou() const {
        cout<<"size of int: "<<sizeof(int)<<endl;
        cout<<"size of double: "<<sizeof(double)<<endl;
        cout<<"<int, double>"<<endl;
    }
};

template <class T1>
class MySimple<T1, double> {
public: 
    void WhoAreYou() const {
        cout<<"size of T1: "<<sizeof(T1)<<endl;
        cout<<"size of double: "<<sizeof(double)<<endl;
        cout<<"<T1, double>"<<endl;
    }
};

main() {
    MySimple<char, double> obj1;
    obj1.WhoAreYou();
    MySimple<int, long> obj2;
    obj2.WhoAreYou();
    MySimple<int, double> obj3;
    obj3.WhoAreYou();
    return 0;
}