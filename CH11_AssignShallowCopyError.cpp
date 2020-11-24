#include <iostream>
#include <cstring>
using namespace std;

class Person { 
    char *name;
    int age;
public:
    Person(char * myname, int myage) {
        int len=strlen(myname);
        name=new char[len+1];
        strcpy(myname, name);
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
    Person& operator=(const Person& ref) {
        delete []name;
        int len=strlen(ref.name);
        name=new char[len+1];
        strcpy(name, ref.name);
        age=ref.age;
        return *this;
    }

};

main() {
    Person man1("Lee dong woo", 29);
    Person man2("Yoon ji you", 22);
    man2=man1;

    man1.ShowPersonInfo();
    man2.ShowPersonInfo();
    return 0;
}