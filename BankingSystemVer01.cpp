/*
 * Banking System Ver 0.1
 * 작성자: 윤성우
 * 내  용: OOP 단계별 프로젝트의 기본 틀 구성
 */

#include <iostream>
#include <cstring>

using namespace std;
namespace BAK {
	enum {MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};

	void SelectMenu(int choice) {
		switch(choice) {
		case MAKE:
			MakeAccount();
			break;
		case DEPOSIT:
			DepositMoney();
			break;
		case WITHDRAW:
			WithdrawMoney();
			break;
		case INQUIRE:
			ShowAllAccInfo();
			break;
		default:
			cout<<"Illegal selection.."<<endl;
		}
	}
}

void ShowMenu(void);       // 메뉴출력
void MakeAccount(void);    // 계좌개설을 위한 함수
void DepositMoney(void);       // 입    금
void WithdrawMoney(void);      // 출    금
void ShowAllAccInfo(void);     // 잔액조회

class Account {
	int accID;
	int balance;
	char * cusName;
public:
	Account(int id, int money, char * name) : accID(id), balance(money) {
		cusName=new char[strlen(name)+1];
		strcpy(cusName, name);
	}
	int GetID() const;
	void DepositMoney(int money);
	void WithdrawMoney(int money);
	void ShowAccInfo() const;
	~Account() {
		delete cusName;
	}
};

Account * accArr[100];   // Account 저장을 위한 배열
int accNum=0;        // 저장된 Account 수

int main(void)
{
	int choice;
	
	while(1)
	{
		ShowMenu();
		cout<<"선택: "; 
		cin>>choice;
		cout<<endl;

		BAK::SelectMenu(choice);
	}
	return 0;
}

void ShowMenu(void)
{
	cout<<"-----Menu------"<<endl;
	cout<<"1. 계좌개설"<<endl;
	cout<<"2. 입    금"<<endl;
	cout<<"3. 출    금"<<endl;
	cout<<"4. 계좌정보 전체 출력"<<endl;
	cout<<"5. 프로그램 종료"<<endl;
}

void MakeAccount(void) 
{
	int id;
	char * name;
	int balance;
	
	cout<<"[계좌개설]"<<endl;
	cout<<"계좌ID: ";	cin>>id;
	cout<<"이  름: ";	cin>>name;
	cout<<"입금액: ";	cin>>balance;
	cout<<endl;
	
	Account * aptr = new Account(id, balance, name);
	accArr[accNum] = aptr;
	accNum++;
}

void DepositMoney(void)
{
	int money;
	int id;
	cout<<"[입    금]"<<endl;
	cout<<"계좌ID: ";	cin>>id;
	cout<<"입금액: ";	cin>>money;
	
	for(int i=0; i<accNum; i++)
	{
		if(accArr[i]->GetID()==id)
		{
			accArr[i]->DepositMoney(money);
			return;
		}
	}
	cout<<"유효하지 않은 ID 입니다."<<endl<<endl;
}

void WithdrawMoney(void)
{
	int money;
	int id;
	cout<<"[출    금]"<<endl;
	cout<<"계좌ID: ";	cin>>id;
	cout<<"출금액: ";	cin>>money;
	
	for(int i=0; i<accNum; i++)
	{
		if(accArr[i]->GetID()==id)
		{
			accArr[i]->WithdrawMoney(money);
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
	}
}

int Account::GetID() const {
	return accID;
}
void Account::DepositMoney(int money) {
	balance+=money;
	cout<<"입금완료"<<endl<<endl;
}
void Account::WithdrawMoney(int money){
	if(balance < money)
		cout<<"잔액부족"<<endl<<endl;
	else{
		balance-=money;
		cout<<"출금완료"<<endl<<endl;	
	}
}
void Account::ShowAccInfo() const {
	cout<<"계좌ID: "<<accID<<endl;
	cout<<"이 름: "<<cusName<<endl;
	cout<<"잔 액: "<<balance<<endl;
}