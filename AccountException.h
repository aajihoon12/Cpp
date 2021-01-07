#ifndef __ACCOUNT_EXCEPTION_H__
#define __ACCOUNT_EXCEPTION_H__

#include "BankingCommonDecl.h"

class MinusException {
    int minus;
public:
    MinusException(int data) : minus(data) {}
    void ShowExceptionReason() const {
        cout<<"[���� ��Ȳ: "<<minus<<"�� ������ �Է°��� �� �� �����ϴ�.]"<<endl;
    }
};

class InsufException {
    int balance, money;
public:
    InsufException(int balance, int money) : balance(balance), money(money) {}
    void ShowExceptionReason() const {
        cout<<"[���� ��Ȳ: "<<balance-money<<"����ϰ��� �ϴ� �ش� �ܾ��� �����մϴ�.]"<<endl;
    }
};

#endif