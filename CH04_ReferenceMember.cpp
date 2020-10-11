#include <iostream>
using namespace std;

class AAA {
public:
    AAA() {
        cout<<"empty object"<<endl;
    }
    void ShowYourName() const {
        cout<<"I'm class AAA"<<endl;
    }
};

class BBB {
    AAA &ref;
    const int &num;
public:
    BBB(AAA &r, const int &n) : ref(r), num(n) { }
    void ShowYourBody() const {
        ref.ShowYourName();
        cout<<"and"<<endl;
        cout<<"I ref num"<<num<<endl;
    }
};

main() {
    AAA obj1;
    BBB obj2(obj1, 20);
    obj2.ShowYourBody();
    return 0;
}