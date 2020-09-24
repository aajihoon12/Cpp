#ifndef __CH03_CALCULATOR_H__
#define __CH03_CALCULATOR_H__

class Calculator {
    int acnt; 
    int mcnt;
    int mucnt;
    int dcnt;

public:
    void Init();
    double Add(const double &n1, const double &n2);
    double Min(const double &n1, const double &n2);
    double Mul(const double &n1, const double &n2);
    double Div(const double &n1, const double &n2);
    void ShowOpCount();
};

#endif