#include <iostream>
#include <cstring>
using namespace std;

class Person {
    char * name;
    int age;
public:
    Person(char * myname, int myage) {
        int len = strlen(myname)+1;
        name=new char[len];
        strcpy(name, myname);
        age=myage;
    }
    void ShowPersonInfo() const {
        cout<<"�̸�: "<<name<<endl;
        cout<<"����: "<<age<<endl;
    }
    ~Person() {
        delete []name;
        cout<<"called destructor!"<<endl;
    }
};