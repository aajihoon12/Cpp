#include <iostream>
using namespace std;

void ChangeByRef(int &ref) {
    ref++;
}

void ChangeByRef2(int &ref) {
    ref *= -1;
}

main() {
    int val1 = 5;
    int val2 = -10;

    ChangeByRef(val1);
    ChangeByRef2(val2);

    cout<<"val1: "<<val1<<endl;
    cout<<"val2: "<<val2<<endl;
    return 0;
}