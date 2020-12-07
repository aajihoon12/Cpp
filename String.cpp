#include <cstring>
#include "String.h"

#include <iostream>
#include <cstring>
using namespace std;

String::String() {
    len=0;
    str=NULL;
}

String::String(const char *s) {
    len=strlen(s)+1;
    str=new char[len];
    strcpy(str, s);
}

String::String(const String& s) {
    len=s.len;
    str=new char[len];
    strcpy(str, s.str);
}

String::~String() {
    if(str!=NULL)
        delete []str;
}

String& String::operator=(const String& s) {
    len=s.len;
    if(str!=NULL)
        delete []str;
    
    str=new char[len];
    strcpy(str, s.str);
    return *this;
}

String& String::operator+=(const String &s) {
    len+=s.len-1;
    char *temp=new char[len];
    strcpy(temp, str);
    strcat(temp, s.str);

    if(str!=NULL)
        delete []str;
    str=temp;
    return *this;
}

bool String::operator== (const String& s) {
    return strcmp(str, s.str) ? false : true;
}

String String::operator+(const String &s) {
    char *temp=new char[len+s.len-1];
    strcpy(temp, str);
    strcat(temp, s.str);
    String temp(temp);
    delete []temp;
    return temp;
}

ostream& operator<< (ostream& os, const String &s) {
    cout<<s.str<<endl;
    return os;
}

istream& operator>> (istream& is, String &s) {
    char temp[100];
    is>>temp;
    s=String(temp);
    return is;
}


