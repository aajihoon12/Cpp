#include "Account.h"
#include "AccountArray.h"
/* 
 * Ŭ���� �̸�: AccountHandler
 * Ŭ���� ����: ��Ʈ��(Control) Ŭ����
 */

class AccountHandler
{
private:
	AccountArray accArr;
	int accNum;
public:
	AccountHandler();
	void ShowMenu(void) const;
	void MakeAccount(void);
	void DepositMoney(void);
	void WithdrawMoney(void);
	void ShowAllAccInfo(void) const;
	~AccountHandler();

protected:
	void MakeNormalAccount(void);
	void MakeCreditAccount(void);
};