#include <iostream>
#include <cstring>
using namespace std;

main() {
    char *str1 = "I'am happy~";
    cout<<strlen(str1)<<endl;

    char str2[strlen(str1)];
    strcpy(str2, str1);
    strcat(str2, str1);

    cout<<strcmp(str1,str2)<<endl;   
}   