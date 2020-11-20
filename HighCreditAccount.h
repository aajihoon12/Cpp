/*
* 파일이름: HighCreditAccount.h
* 작성자: 윤성우
* 업데이트 정보: [2010, 01, 01] 파일버전 0.7
*/

#ifndef __HIGHCREDIT_ACCOUNT_H__
#define __HIGHCREDIT_ACCOUNT_H__

#include "NormalAccount.h"

class HighCreditAccount : public NormalAccount {
    int specialRate;
public:
    HighCreditAccount(int ID, int money, char * name, int rate, int special) 
            :NormalAccount(ID, money, name, rate), specialRate(special) {
                //
            }
    virtual void Depoist(int money) {
        NormalAccount::Deposit(money);
        Account::Deposit(money*(specialRate/100.0));
    }
};

#endif