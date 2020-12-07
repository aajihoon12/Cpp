/* 
 * Ŭ���� �̸�: Account
 * Ŭ���� ����: Entity Ŭ����
 */

#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

#include "String.h"

class Account
{
private:
	int accID; 
	int balance;    
	String str; 

public:
	Account(int ID, int money, char * name);

	int GetAccID() const;
	virtual void Deposit(int money);
	int Withdraw(int money) ;
	void ShowAccInfo() const ;
	~Account();
};

#endif