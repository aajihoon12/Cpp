#include <iostream>
using namespace std;

class FruitSeller {
    int APPLE_PRICE;
    int numOfAppels;
    int myMoney;
public:
    void InitMembers(int price, int num, int money){
        APPLE_PRICE=price;
        numOfAppels=num;
        myMoney=money;
    }
    int SaleApples(int money) {
        int num = money/APPLE_PRICE;
        numOfAppels-=num;
        myMoney+=money;
        return num;
    }
    void ShowSalesResult() {
        cout<<"���� ���: "<<numOfAppels<<endl;
        cout<<"�Ǹ� ����: "<<myMoney<<endl;
    }
};

class FruitByer {
    int myMoney;
    int numOfApples;

public:
    void InitMembers(int money) {
        myMoney=money;
        numOfApples=0;
    }
    void BuyApples(FruitSeller &seller, int money) {
        numOfApples += seller.SaleApples(money);
        myMoney-=money;
    }
    void ShowBuyResult() {
        cout<<"���� �ܾ�: "<<myMoney<<endl;
        cout<<"��� ����: "<<numOfApples<<endl;
    }
};

main() {
    FruitSeller seller;
    seller.InitMembers(1000, 20, 0);
    FruitByer buyer;
    buyer.InitMembers(5000);
    buyer.BuyApples(seller, 2000);

    cout<<"���� �Ǹ����� ��Ȳ"<<endl;
    seller.SaleApples();
    cout<<"���� �������� ��Ȳ"<<endl;
    buyer.ShowBuyResult();
    return 0;

}