#include <iostream>
#include "CH03_Printer.h"
using namespace std;

void Printer::SetString(const char * cptr) {
    ptr = cptr; 
}

void Printer::ShowString() {
    cout<<*ptr<<endl;
}