#include <iostream>
using namespace std;

class Car {
    int fuelGauge;
public:
    Car(int fuel) : fuelGauge(fuel) {}
    void ShowCarState() { cout<<"잔여 연료량: "<< fuelGauge <<endl; }
};

class Truck : public Car {
    int freightWeight;
public:
    Truck(int fuel, int weight) : Car(fuel), freightWeight(freight) { }      
    void ShowCarState() {
        Car::ShowCarState();
        cout<<"화물의 무게: "<<freightWeight<<endl;
    }
};

main() {
    Car * pcar1=new Truck(80, 200);
    Truck * ptruck1=(Truck *)pcar1;
    ptruck1->ShowCarState();
    Car * pcar2=new Car(120);
    Truck * ptruck2=(Truck *)pcar2;
    ptruck2->ShowCarState();
    return 0;
}