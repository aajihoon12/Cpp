#include <iostream>
using namespace std;

class SoSimple {
    int num;
public:
    SoSimple(int n) : num(n) { }
    SoSimple(const SoSimple& copy) : num(copy.num) {
        cout<<"Called SoSimpe(const SoSimpe& copy)"<<endl;
    }
    SoSimple& AddNum(int n) {
        num+=n;
        return *this;
    }
    void ShowData() {
        cout<< "num: "<<num<<endl;
    }
};

SoSimple SimpleFuncObj(SoSimple ob) {
    cout<<"return ÀÌÀü"<<endl;
    return ob;
}

main() {
    SoSimple obj(7);
    SimpleFuncObj(obj).AddNum(30).ShowData();
    obj.ShowData();
}