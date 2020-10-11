#include <iostream>
using namespace std;

class FruitSeller {
    const int APPLE_PRICE;
    int numOfApples;
    int myMoney;
public:
    FruitSeller(int price, int num, int money) : APPLE_PRICE(price), numOfApples(num), myMoney(money) {
    }
    int SaleApples(int money) {
        int num = APPLE_PRICE/money;
        numOfApples -= num;
        myMoney += money;
        return num;
    }
    void ShowSalesResult() const {
        cout<<"남은 사과의 개수: "<<numOfApples<<endl;
        cout<<"남은 잔액: "<<myMoney<<endl;
    }
};

class FruitBuyer {
    //
};

main() {
    //
}