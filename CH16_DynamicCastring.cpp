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
    Truck(int fuel, int weight) : Car(fuel), freightWeight(weight) { }      
    void ShowCarState() {
        Car::ShowCarState();
        cout<<"화물의 무게: "<<freightWeight<<endl;
    }
};

main() {
    Car *pcar1=new Truck(80, 120);
    //Truck *ptruck1=dynamic_cast<Truck*>(pcar);

    Car *pcar2=new Car(120);
    //Truck *ptruck2=dynamic_cast<Truck*>(pcar);

    Truck *ptruck3=new Truck(70, 150);
    Car *pcar3=dynamic_cast<Car*>(ptruck3);
    return 0;
}