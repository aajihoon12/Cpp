#include <iostream>
using namespace std;

class SinivelCap {
public:
    void Take() const {cout<<"�๰�� ��~ ���ϴ�."<<endl;}
};

class SneezeCap {
public:
    void Take() const {cout<<"��ä�Ⱑ �ܽ��ϴ�."<<endl;}
};

class SnuffleCap {
public:
    void Take() const {cout<<"�ڰ� �� �ո��ϴ�."<<endl;}
};

class CONTACT600 {
private:
    SinivelCap sin;
    SneezeCap sne;
    SnuffleCap snu;

public:
    void Take() const {
        sin.Take();
        sne.Take();
        snu.Take();
    }
};

class ColdPatient {
    void TakeCONTACT600(const CONTACT600 &cap) const {cap.Take();}
};

main() {
    CONTACT600 cap;
    ColdPatient sufferer;

    sufferer.TakeCONTACT600(cap); // Why this is error?
    return 0;
}
