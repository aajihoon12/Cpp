/*
 * Banking System Ver 0.1
 * �ۼ���: ������
 * ��  ��: OOP �ܰ躰 ������Ʈ�� �⺻ Ʋ ����
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

void ShowMenu(void);       // �޴����
void MakeAccount(void);    // ���°����� ���� �Լ�
void DepositMoney(void);       // ��    ��
void WithdrawMoney(void);      // ��    ��
void ShowAllAccInfo(void);     // �ܾ���ȸ

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

Account * accArr[100];   // Account ������ ���� �迭
int accNum=0;        // ����� Account ��

int main(void)
{
	int choice;
	
	while(1)
	{
		ShowMenu();
		cout<<"����: "; 
		cin>>choice;
		cout<<endl;

		BAK::SelectMenu(choice);
	}
	return 0;
}

void ShowMenu(void)
{
	cout<<"-----Menu------"<<endl;
	cout<<"1. ���°���"<<endl;
	cout<<"2. ��    ��"<<endl;
	cout<<"3. ��    ��"<<endl;
	cout<<"4. �������� ��ü ���"<<endl;
	cout<<"5. ���α׷� ����"<<endl;
}

void MakeAccount(void) 
{
	int id;
	char * name;
	int balance;
	
	cout<<"[���°���]"<<endl;
	cout<<"����ID: ";	cin>>id;
	cout<<"��  ��: ";	cin>>name;
	cout<<"�Աݾ�: ";	cin>>balance;
	cout<<endl;
	
	Account * aptr = new Account(id, balance, name);
	accArr[accNum] = aptr;
	accNum++;
}

void DepositMoney(void)
{
	int money;
	int id;
	cout<<"[��    ��]"<<endl;
	cout<<"����ID: ";	cin>>id;
	cout<<"�Աݾ�: ";	cin>>money;
	
	for(int i=0; i<accNum; i++)
	{
		if(accArr[i]->GetID()==id)
		{
			accArr[i]->DepositMoney(money);
			return;
		}
	}
	cout<<"��ȿ���� ���� ID �Դϴ�."<<endl<<endl;
}

void WithdrawMoney(void)
{
	int money;
	int id;
	cout<<"[��    ��]"<<endl;
	cout<<"����ID: ";	cin>>id;
	cout<<"��ݾ�: ";	cin>>money;
	
	for(int i=0; i<accNum; i++)
	{
		if(accArr[i]->GetID()==id)
		{
			accArr[i]->WithdrawMoney(money);
			return;
		}
	}
	cout<<"��ȿ���� ���� ID �Դϴ�."<<endl<<endl;
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
	cout<<"�ԱݿϷ�"<<endl<<endl;
}
void Account::WithdrawMoney(int money){
	if(balance < money)
		cout<<"�ܾ׺���"<<endl<<endl;
	else{
		balance-=money;
		cout<<"��ݿϷ�"<<endl<<endl;	
	}
}
void Account::ShowAccInfo() const {
	cout<<"����ID: "<<accID<<endl;
	cout<<"�� ��: "<<cusName<<endl;
	cout<<"�� ��: "<<balance<<endl;
}