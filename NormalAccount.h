/*
* 파일이름: NormalAccount.h
* 작성자: 윤성우
* 업데이트 정보: [2010, 01, 01] 파일버전 0.7
*/

#ifndef __NORMAL_ACCOUNT_H__
#define __NORMAL_ACCOUNT_H__

#include "Account.h"

class NormalAccount : public Account {
    int interRate;
public:
    NormalAccount(int ID, int money, char * name, int rate) 
        : Account(ID, money, name), interRate(rate) {
            //
        }
    virtual void Depoist(int money) {
        Account::Deposit(money);
        Account::Deposit(money*(interRate/100.0));
    }
};

#endif