#include <iostream>
#include <cstring>
using namespace std;

class String {
    int len;
    char *str;
public:
    String();
    String(const char *s);
    String(const String& s);
    ~String();
    String& operator=(const String& s);
    String& operator+=(const String& s);
    bool operator==(const String& s);
    String operator+(const String& s);

    friend ostream& operator<< (ostream& os, const String& s);
    friend istream& operator>> (istream& is, String& s);
};

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

main() {
    String str1="I like";
    String str2="string class";
    String str3=str1+str2;

    cout<<str1<<endl;
    cout<<str2<<endl;
    cout<<str3<<endl;

    str1+=str2;
    if(str1==str3)
        cout<<"동일 문자열"<<endl;
    else
        cout<<"동일하지 않은 문자열"<<endl;

    String str4;
    cout<<"문자열 입력 ";
    cin>>str4;
    cout<<"입력한 문자열: "<<str4<<endl;
    return 0;
}

