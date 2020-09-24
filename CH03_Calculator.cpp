#include <iostream>
#include "CH03_Calculator.h"
using namespace std;

void Calculator::Init() {
    acnt=0; mcnt=0;
    mucnt=0; dcnt=0;
}

double Calculator::Add(const double &n1, const double &n2) {
    acnt++;
    return n1 + n2;
}

double Calculator::Min(const double &n1, const double &n2) {
    mcnt++;
    return n1 - n2;
}

double Calculator::Mul(const double &n1, const double &n2) {
    mucnt++;
    return n1 * n2;
}

double Calculator::Div(const double &n1, const double &n2) {
    dcnt++;
    return n1 / n2;
}

void Calculator::ShowOpCount() {
    cout<<"µ¡¼À: "<<acnt;
    cout<<" »¬¼À: "<<mcnt;
    cout<<" °ö¼À: "<<mucnt;
    cout<<" ³ª´°¼À: "<<dcnt<<endl;
}