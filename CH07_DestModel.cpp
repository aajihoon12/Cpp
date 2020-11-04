#include <iostream>
#include <cstirng>
using namespace std;

calss Person{
    char * name;
public:
    Person(char * name) {
        this->name=new char[strlen(name)+1];
        strcpy(this->name, name);
    }
    ~Person() {
        delete []name;
    }
    void WhatYourName() const {
        cout<<"My name is "<<name<<endl;
    }
};

class UnivStudent : public Person {
    char * major;
public:
    UnivStudent(char * name, char * major) : Person(name) {
        this->major=new char[strlen(major)+1];
        strcpy(this->major, major);
    }
    ~UnivStudent() {
        delete []major;
    }
    void WhoAreYou() const {
        WhatYourName();
        cout<<"My major is "<<major<<endl; 
    }
};

main() {
    UnivStudent st1("kim", "Mathmatics");
    st1.WhoAreYou();

    UnivStudent st2("Hong", "Physics");
    st2.WhoAreYou();
    return 0;
}