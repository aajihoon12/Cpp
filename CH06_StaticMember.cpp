#include <iostream>
using namespace std;

class SoSimple {
    static int simObjcnt;
public:
    SoSimple() {
        simObjcnt++;
        cout<<simObjcnt<<"¹øÂ° SoSimple °´Ã¼"<<endl;
    }
};
int SoSimple::simObjcnt = 0;

class SoComplex {
    static int cmxObjCnt;
public:
    SoComplex() {
        cmxObjCnt++;
        cout<<cmxObjCnt<<"¹øÂ° SoComplex °´Ã¼"<<endl;
    }
    SoComplex(const SoComplex &copy) {
        cmxObjCnt++;
        cout<<cmxObjCnt<<"¹øÂ° SoComplex °´Ã¼"<<endl;
    }
};

main() {
    SoSimple sim1;
    SoSimple sim2;

    SoComplex cmx1;
    SoComplex cmx2(cmx1);
    SoComplex();
    return 0; 
}

