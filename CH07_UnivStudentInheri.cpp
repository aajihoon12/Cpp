#include <iostream>
#include <cstring>
using namespace std;

class Person {
    int age;
    char name[50];
public:
    Person(int age, char * name) : this->age(age) {
        strcpy(this->name, name);
    }
    void WhatYourName() const {
        cout<<"My name is "<<name<<endl;
    }
    void HowOldAreYou() const {
        cout<<"My age is "<<age<<endl;
    }
};

class UnivStudent : public Person {
    char major[30];
public:
    UnivStudent(int age, char *name, char *major) : Person(age, name) {
        strcpy(this->major, major);
    }
    void WhoAreYou() {
        WhatYourName();
        HowOldAreYou();
        cout<<"my major is "<<major<<endl;
    }
};

main() {
    UnivStudent ustd1(23, "Lee", "SocialWelfare");
    ustd1.WhoAreYou();

    UnivStudent ustd2(23, "Young", "SocialWelfare");
    ustd2.WhoAreYou();
    return 0;
}