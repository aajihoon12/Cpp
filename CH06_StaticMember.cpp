#include <iostream>
using namespace std;

class SoSimple {
    static int simObjcnt;
public:
    SoSimple() {
        simObjcnt++;
        cout<<simObjcnt<<"��° SoSimple ��ü"<<endl;
    }
};
int SoSimple::simObjcnt = 0;

class SoComplex {
    static int cmxObjCnt;
public:
    SoComplex() {
        cmxObjCnt++;
        cout<<cmxObjCnt<<"��° SoComplex ��ü"<<endl;
    }
    SoComplex(const SoComplex &copy) {
        cmxObjCnt++;
        cout<<cmxObjCnt<<"��° SoComplex ��ü"<<endl;
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

