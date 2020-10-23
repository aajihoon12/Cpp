#include <iostream>
using namespace std;

class SoSimple {
    int num;
public:
    SoSimple(int n) : num(n) { 
        cout<<"New Object: "<<this<<endl;
    }
    SoSimple(const SoSimple& copy) : num(copy.num) {
        cout<<"New Copy obj: "<<this<<endl;
    }
    ~SoSimple() {
        cout<<"Destroy obj: "<<this<<endl;
    }
    SoSimple& AddNum(int n) {
        num+=n;
        return *this;
    }
    void ShowSimpleData() {
        cout<<"num: "<<num<<endl;
    }
};

SoSimple SimpleFuncObj(SoSimple ob) {
    cout<<"Parm ADR: "<<&ob<<endl;
    return ob;
}

main() {
    SoSimple obj(7);
    SimpleFuncObj(obj);

    SimpleFuncObj(obj).AddNum(30).ShowSimpleData();
    obj.ShowSimpleData();

    SoSimple temp = SimpleFuncObj(obj);
    temp.ShowSimpleData();
    return 0; 
}