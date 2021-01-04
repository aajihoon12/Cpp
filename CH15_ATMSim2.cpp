#include <iostream>
#include <cstring>
using namespace std;

class AccountException {
public:
    virtual void ShowExceptionReason() =0; // pure virtual fucntion = abstract class
};

class DepositException : public AccountException {
    int reqDep;
public:
    DepositException(int money) : reqDep(money) {}
    void ShowExceptionReason() {
        cout<<"[예외 메시지: "<<reqDep<<"는 입금불가]"<<endl;
    }
};

class WithDrawException : public AccountException {
    int balance;
public:
    WithDrawException(int money) : balance(money) {}
    void ShowExceptionReason() {
        cout<<"[예외 메시지: 잔액 "<<balance<<", 잔액부족!"<<endl;
    }
};

class Account {
    char accNum[50];
    int balance;
public:
    Account(char* acc, int money) : balance(money) {
        strcpy(accNum, acc);
    }
    void Deposit(int money) throw (AccountException) {
        if(money<0)
            throw DepositException(money);
        balance+=money;
    }
    void WithDraw(int money) throw (AccountException) {
        if(balance<money)
            throw WithDrawException(balance);
        balance-=money;
    }
    void ShowMyMoney() const {
        cout<<"잔액: "<<balance<<endl;
    }
};

main() {
    Account myAcc("56789-827120", 5000);

    try{
        myAcc.Deposit(2000);
        myAcc.Deposit(-300);
    }catch(AccountException &expn) {
        expn.ShowExceptionReason();
    }
    myAcc.ShowMyMoney();

    try{
        myAcc.WithDraw(3500);
        myAcc.WithDraw(4500);
    }catch(AccountException &expn) {
        expn.ShowExceptionReason();
    }
    myAcc.ShowMyMoney();
    return 0;
}