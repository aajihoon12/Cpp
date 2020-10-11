#include <iostream>
#include <cstring>
using namespace std;

class Person {
    char * name;
    int age;
public:
    Person(char * myname, int myage) {
        name = new char[strlen(myname)+1];
        strcpy(name, myname);
        age = myage;
    }
    void ShowPersonInfo() const {
        cout<<"이름: "<<name<<endl;
        cout<<"나이: "<<age<<endl;
    }
    ~Person() {
        delete []name;
        cout<<"called destructor!"<<endl;
    }
};

main() {
    Person man1("Lee dong woo", 29); //문자열은 기본 변수 취급 임시 변수 메모리 할당
    Person man2("Jang dong gun", 41);
    man1.ShowPersonInfo();
    man2.ShowPersonInfo();
    return 0;
}