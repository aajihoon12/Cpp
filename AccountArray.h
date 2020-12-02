#ifndef __ACCOUNT_ARRAY_H__
#define __ACCOUNT_ARRAY_H__

#include "BankingCommonDec1.h"
#include "Account.h"

typedef Account* AccountPtr;

class AccountArray {
    Account** arr;
    int arrlen;
    AccountArray(const AccountArray& arr) {  }
    AccountArray& operator=(const AccountArray& arr) {  }
public:
    AccountArray(int len=100);
    AccountPtr& operator[](int idx);
    AccountPtr operator[](int idx) const;
    int GetArrLen() const;
    ~AccountArray();
};

#endif