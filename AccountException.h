#ifndef __ACCOUNT_EXCEPTION_H__
#define __ACCOUNT_EXCEPTION_H__

#include "BankingCommonDecl.h"

class MinusException {
    int minus;
public:
    MinusException(int data) : minus(data) {}
    void ShowExceptionReason() const {
        cout<<"[예외 상황: "<<minus<<"는 적절한 입력값이 될 수 없습니다.]"<<endl;
    }
};

class InsufException {
    int balance, money;
public:
    InsufException(int balance, int money) : balance(balance), money(money) {}
    void ShowExceptionReason() const {
        cout<<"[예외 상황: "<<balance-money<<"출금하고자 하는 해당 잔액이 부족합니다.]"<<endl;
    }
};

#endif