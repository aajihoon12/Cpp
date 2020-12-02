/* 
 * 클래스 이름: Account
 * 클래스 유형: Entity 클래스
 */

#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

class Account
{
private:
	int accID; 
	int balance;    
	char * cusName; 

public:
	Account(int ID, int money, char * name);
	Account(const Account & ref);

	int GetAccID() const;
	virtual void Deposit(int money);
	int Withdraw(int money) ;
	void ShowAccInfo() const ;
	Account& operator=(const Account &ref);
	~Account();
};

#endif