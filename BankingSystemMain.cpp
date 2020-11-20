/*
 * SoftWare의 버전: Banking Sys*tem Ver 0.7
 * 
 * 파일이름: BankingSystemMain.cpp
 * 작성자: 윤성우
 * 업데이트 정보: [2010, 01, 01] 파일버전 0.7 
 */

#include "BankingCommonDec1.h"
#include "AccountHandler.h"

/* 
 * 컨트롤 클래스 AccountHandler 중심의 main 함수
 */

int main(void)
{
	AccountHandler manager;
	int choice;
	
	while(1)
	{
		manager.ShowMenu();
		cout<<"선택: "; 
		cin>>choice;
		cout<<endl;
		
		switch(choice)
		{
		case MAKE:
			manager.MakeAccount(); 
			break;
		case DEPOSIT:
			manager.DepositMoney(); 
			break;
		case WITHDRAW: 
			manager.WithdrawMoney(); 
			break;
		case INQUIRE:
			manager.ShowAllAccInfo(); 
			break;
		case EXIT:
			return 0;
		default:
			cout<<"Illegal selection.."<<endl;
		}
	}
	return 0;
}