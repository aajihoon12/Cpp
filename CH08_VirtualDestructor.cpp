#include <iostream>
#include <cstring>
using namespace std;

class First {
    char * strOne;
public:
    First(char * str) {
        strOne = new char[strlen(str) + 1];
    }
    virtual ~First() {
        delete []strOne;
    }
};

class Second: public First {
    char * strTwo;
public:
    Second(char * str1, char * str2) : First(str1) {
        strTwo=new char[strlen(str2)+1];
    }
    virtual ~Second() {
        delete []strTwo;
    }
};

main() {
    First * ptr = new Second("simple", "complex");
    delete ptr;
    return 0;
}