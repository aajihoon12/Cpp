#include <iostream>
#include <cstring>
using namespace std;

template <class T>
T Max(T a, T b) {
    return a > b ? a : b;
}

template <>
char* Max<char*>(char* a, char* b) {
    cout<<"char* Max<char*>(char* a, char* b)";
    return strlen(a) > strlen(b) ? a : b;
}

template <>
const char* Max<const char*>(const char* a, const char* b) {
    cout<<"const char* Max<const char*>(const char* a, const char* b)";
    return strcmp(a, b) > 0 ? a : b;
}

main() {
    cout<< Max(10, 20) <<endl;
    cout<< Max(10.0, 20.0) <<endl;
    cout<< Max('A', 'B') <<endl;
    cout<< Max("brain", "improve")<<endl;

    char str1[]="brain";
    char str2[]="improve";

    cout<< Max(str1, str2) <<endl;
}