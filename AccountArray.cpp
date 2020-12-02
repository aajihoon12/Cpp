#include "BankingCommonDec1.h"
#include "Account.h"
#include "AccountArray.h"

typedef Account* AccountPtr;

    AccountArray::AccountArray(int len) : arrlen(len) {
        arr=new AccountPtr[len];
    }

    AccountPtr& AccountArray::operator[](int idx) {
        if(idx<0 || idx>=100) {
            cout<<"Array index out of Boundary exception!"<<endl;
            exit(1);
        }
        return arr[idx];
    }

    AccountPtr AccountArray::operator[](int idx) const {
        if(idx<0 || idx>=100) {
            cout<<"Array index out of Boundary exception!"<<endl;
            exit(1);
        }
        return arr[idx];
    }

    int AccountArray::GetArrLen() const {
        return arrlen;
    }

    AccountArray::~AccountArray() {
        delete []arr;
    }
