

#include "BankingCommonDec1.h"
#include "Account.h"

Account::Account(int ID, int money, char * name)
	: accID(ID), balance(money), str(name) {}

int Account::GetAccID() const { return accID; }

void Account::Deposit(int money)
{
	balance+=money;
}

int Account::Withdraw(int money)
{
	if(balance<money)
		return 0;
	
	balance-=money;
	return money;
}

void Account::ShowAccInfo() const 
{
	cout<<"����ID: "<<accID<<endl;
	cout<<"��  ��: "<<str<<endl;
	cout<<"��  ��: "<<balance<<endl;
}