#include <iostream>

class SoBase {
    int baseNum;
public:
    SoBase(int n) : baseNum(n) {
        cout<<"SoBase(): "<<baseNum<<endl;
    }
    ~SoBase() {
        cout<<"~SoBase(): "<<baseNum<<endl;
    }
};

class SoDerived : SoBase {
    int derivedNum;
public:
    SoDerived(int n) : SoBase(n) ,derivedNum(n) {
        cout<<"SoDervied(int n): "<<derivedNum<<endl;
    }
    ~SoDerived() {
        cout<<"~SoDerived(): "<<derivedNum<<endl;
    }
};

main() {
    SoDervied drv1(15);
    SoDerived drv2(27);
    return 0;
}