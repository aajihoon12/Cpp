#include <iostream>
using namespace std;

template <class T>
void ShowStaticValue() {
    static T num=0;
    num+=1;
    cout<<num<<", ";
}

main() {
    ShowStaticValue<int>();
    ShowStaticValue<int>();
    ShowStaticValue<int>();
    cout<<endl;
    ShowStaticValue<long>();
    ShowStaticValue<long>();
    ShowStaticValue<long>();
    cout<<endl;
    ShowStaticValue<double>();
    ShowStaticValue<double>();
    ShowStaticValue<double>();
    cout<<endl;
    return 0;
}