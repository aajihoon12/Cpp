/*
 * �����̸�: Account.h
 * �ۼ���: ������
 * ������Ʈ ����: [2021, 01, 06] ���Ϲ��� 0.92 
 */

#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

#include "String.h"

class Account
{
private:
	int accID; 
	int balance;    
	String cusName; // char * cusName;
public:
	Account(int ID, int money, String name); 
	int GetAccID() const;
	virtual void Deposit(int money); //Deposit�� ���̵� Ȥ�� Ȯ��� ����� ����մϴ�.
	int Withdraw(int money) ;
	void ShowAccInfo() const ;
};
#endif