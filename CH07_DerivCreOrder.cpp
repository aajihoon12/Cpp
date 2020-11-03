#include <iostream>
using namespace std;

class SoBase {
    int baseNum;
public:
    SoBase() : baseNum(20) { 
        cout<<"SoBase()"<<endl;
    }
    SoBase(int n) : baseNum(n) {
        cout<<"SoBase(int n)"<<endl;
    }
    void ShowBaseData() const {
        cout<<baseNum<<endl;
    }
};


class SoDerived : public SoBase {
    int deriveNum;
public:
    SoDerived() : deriveNum(40) {
        cout<<"SoDerive()"<<endl;
    }
    SoDerived(int n) : deriveNum(n) {
        cout<<"SoDerive(int n)"<<endl;
    }
    SoDerived(int n1, int n2) : SoBase(n1), deriveNum(n2) {
        cout<<"SoDerive(int n1, int n2)"<<endl;
    }
    void ShowDerivedData() const {
        ShowBaseData();
        cout<<deriveNum<<endl;
    }
};

main() {
    cout<<"case1...."<<endl;
    SoDerived dr1;
    dr1.ShowDerivedData();
    cout<<"---------------"<<endl;
    cout<<"case2...."<<endl;
    SoDerived dr2(12);
    dr1.ShowDerivedData();
    cout<<"---------------"<<endl;
    cout<<"case3...."<<endl;
    SoDerived dr3(23, 24);
    dr3.ShowDerivedData();
    return 0;
}

