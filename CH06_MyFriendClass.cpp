#include <iostream>
#include <cstring>
using namespace std;

class Girl; //copiler의 순처적 질의 해석

class Boy {
    int height;
    friend class Girl;
public:
    Boy(int len) : height(len) { }
    void ShowYourFriendInfo(const Girl &frn);
};

class Girl {
    char phNum[20];
public:
    Girl(char * num) {
        strcpy(phNum, num);
    }
    void ShowYourFriendInfo(const Boy &frn);
    friend class Boy;
};

void Boy::ShowYourFriendInfo(const Girl &frn) {
    cout<<"Her phone number: "<<frn.phNum<<endl;
}

void Girl::ShowYourFriendInfo(const Boy &frn) {
    cout<<"His height number: "<<frn.height<<endl;
}

main() {
    Boy boy(170);
    Girl girl("000-123-45678");

    boy.ShowYourFriendInfo(girl);
    girl.ShowYourFriendInfo(boy);
}