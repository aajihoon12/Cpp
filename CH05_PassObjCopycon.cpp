#include <iostream>
using namespace std;

class SoSimple {
    int num;
public:
    SoSimple(int n) : num(n) { }
    SoSimple(const SoSimple& copy) : num(copy.num) {
        cout<<"Called SoSimple(const SoSimpe& copy)"<<endl;
    }
    void ShowData() {
        cout<<"num: "<<num<<endl;
    }
};

void SimpleFuncObj(SoSimple obj) {
    obj.ShowData();
}

main() {
    SoSimple obj(7);
    cout<<"함수 호출 전"<<endl;
    SimpleFuncObj(obj);
    cout<<"함수 호출 후"<<endl;
    return 0;
}