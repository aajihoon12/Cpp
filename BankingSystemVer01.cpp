/*
 * Banking System Ver 0.2
 * 작성자: 윤성우
 * 내  용: Account 클래스 정의, 객체 포인터 배열 적용
 */

#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LEN=20;

enum {MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};

class Account
{
private:
	const int accID;      // 계좌번호
	int balance;    // 잔    액
	char * cusName;   // 고객이름

public:
	Account(int ID, int money, char * name)
		: accID(ID), balance(money)
	{
		cusName=new char[strlen(name)+1];
		strcpy(cusName, name);
	}
	Account(const Account &copy) : accID(copy.accID), balance(copy.balance) {
		cusName=new char[strlen(copy.cusName)+1];
		strcpy(cusName, copy.cusName);
	}

	int GetAccID() const { return accID; }

	void Deposit(int money)
	{
		balance+=money;
	}

	int Withdraw(int money)    // 출금액 반환, 부족 시 0
	{
		if(balance<money)
			return 0;
		
		balance-=money;
		return money;
	}

	void ShowAccInfo() const {
		cout<<"계좌ID: "<<accID<<endl;
		cout<<"이  름: "<<cusName<<endl;
		cout<<"잔  액: "<<balance<<endl;
	}

	~Account()
	{
		delete []cusName;
	}	
};

class AccountHandler {
	Account * accArr[100];
	int accNum;
	AccountHandler(const AccountHandler &copy) { }
public:
	AccountHandler() : accNum(0);

	void ShowMenu(void) {
		cout<<"-----Menu------"<<endl;
		cout<<"1. 계좌개설"<<endl;
		cout<<"2. 입    금"<<endl;
		cout<<"3. 출    금"<<endl;
		cout<<"4. 계좌정보 전체 출력"<<endl;
		cout<<"5. 프로그램 종료"<<endl;
	}

	void MakeAccount(void) {
			int id;
			char *name;
			int balance;
			
			cout<<"[계좌개설]"<<endl;
			cout<<"계좌ID: ";	cin>>id;
			cout<<"이  름: ";	cin>>name;
			cout<<"입금액: ";	cin>>balance;
			cout<<endl;

			accArr[accNum++]=new Account(id, balance, name);
		}

	void DepositMoney(void){
		int money;
		int id;
		cout<<"[입    금]"<<endl;
		cout<<"계좌ID: ";	cin>>id;
		cout<<"입금액: ";	cin>>money;
		
		for(int i=0; i<accNum; i++)
		{
			if(accArr[i]->GetAccID()==id)
			{
				accArr[i]->Deposit(money);
				cout<<"입금완료"<<endl<<endl;
				return;
			}
		}
		cout<<"유효하지 않은 ID 입니다."<<endl<<endl;
	}

	void WithdrawMoney(void){
		int money;
		int id;
		cout<<"[출    금]"<<endl;
		cout<<"계좌ID: ";	cin>>id;
		cout<<"출금액: ";	cin>>money;
		
		for(int i=0; i<accNum; i++)
		{
			if(accArr[i]->GetAccID()==id)
			{
				if(accArr[i]->Withdraw(money)==0)
				{
					cout<<"잔액부족"<<endl<<endl;
					return;
				}

				cout<<"출금완료"<<endl<<endl;
				return;
			}
		}
		cout<<"유효하지 않은 ID 입니다."<<endl<<endl;
	}

	void ShowAllAccInfo(void)	
	{
		for(int i=0; i<accNum; i++)
		{
			accArr[i]->ShowAccInfo();
			cout<<endl;
		}
	}

	~AccountHandler() {
		for(int i=0;i<accNum;i++) {
			delete accArr[i];
		}
	}
};

int main(void)
{
	AccountHandler handler;
	int choice;

	while(1)
	{
		handler.ShowMenu();
		cout<<"선택: "; 
		cin>>choice;
		cout<<endl;
		
		switch(choice)
		{
		case MAKE:
			handler.MakeAccount(); 
			break;
		case DEPOSIT:
			handler.DepositMoney(); 
			break;
		case WITHDRAW: 
			handler.WithdrawMoney(); 
			break;
		case INQUIRE:
			handler.ShowAllAccInfo(); 
			break;
		case EXIT:
			return 0;
		default:
			cout<<"Illegal selection.."<<endl;
		}
	}

	return 0;
}

