#include <iostream>
using namespace std;

main() {
    char name[100];
    char phone[100];

    cout<<"이름?: ";
    cin>>name;

    cout<<"번호?: ";
    cin>>phone;

    cout<<name<<"_"<<phone<<endl;

    return 0;
}