#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;

main() {
    char str1[] = "Result";
    char str2[30];

    strcpy(str2, str1);
    cout<<str1<<": "<<sin(0.14)<<endl;
    cout<<str2<<": "<<abs(-1.25)<<endl;
    return 0;
}