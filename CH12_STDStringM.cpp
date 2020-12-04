#include <iostream>
#include <cstring>
using namespace std;

class string {
    char *str;
public:
    string(const char *arr) {
      str=new char[strlen(arr)+1]; 
      strcpy(str, arr);
    }
    string(const string &ref) {
        str=new char[strlen(ref.str)+1];
    }
    string& operator=(const string &ref) {
        delete []str;
        str=new char[strlen(ref.str)+1];
        strcpy(str, ref.str);
    }
    string operator+(const string &ref) {
        int len=strlen(str)+strlen(ref.str);
        char *arr=new char[len+1];
        strcpy(arr, str);
        strcat(arr, ref.str);
        string temp(arr);
        delete []arr;
        return temp;
    }
    string& operator+=(const string &ref) {
        return *this=*this+ref;
    }
    bool operator==(const string &ref) {
        return !(strcmp(str, ref.str));
    }
    friend ostream& operator<<(ostream&, const string&);
    friend istream& operator>>(istream&, const string&); 
    ~string() {
        delete []str;
    }
};
ostream& operator<<(ostream &os, const string &ref) {
    os<<ref.str<<endl;
    return os;
}
istream& operator>>(istream &is, const string &ref) {
    char *arr;
    is>>arr;
    ref=string(arr);
    return is;
}