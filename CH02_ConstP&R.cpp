#include <iostream>
using namespace std;

main() {
    const int num=12;
    const int *ptr=&num;
    const int* &pref = ptr;

    cout<<"*ptr: "<<*ptr<<endl;
    cout<<"&pref: "<<*pref<<endl;
    return 0;
}