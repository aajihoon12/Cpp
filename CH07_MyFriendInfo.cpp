#include <iostream>
using namespace std;

class MyFriendInfo {
    char * name;
    int age;
public:
    MyFriendInfo(char * name, int age) : this->age(age) {
        this->name=new char[strlen(name)+1];
        strcpy(this->name, name);
    }
    ~MyFriendInfo() {
        delete []name;
    }
    void ShowMyFriendInfo() const {
        cout<<"이름: "<<name<<endl;
        cout<<"나이: "<<age<<endl;
    }
};

class MyFriendDetailInfo : public MyFriendInfo() {
    char * addr;
    char * phone;
public:
    MyFriendDetailInfo(char * name, int age, char * addr, char * phone) : MyFriendInfo(name, age) {
        this->addr=new char[strlen(addr)+1];
        strcpy(this->addr, addr);

        this->phone=new char[strlen(phone)+1];
        strcpy(this->phone, phone);
        return 0;
    }
    ~MyFriendDetailInfo() {
        delete []addr;
        delete []phone;
    }
    void ShowMyFriendDetailInfo() const {
        ShowMyFriendINfo();
        cout<<"주소: "<<addr<<endl;
        cout<<"번호: "<<phone<<endl;
    }
}


main() {
    MyFriendDetailInfo note1("Lee", 27, "saungnam", "1234-1234");
    note1.ShowMyFriendDetailInfo();
    note1.ShowMyFriendInfo();
    return 0;
}