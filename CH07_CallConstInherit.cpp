#include <iostream>
using namespace  std;

class Car {
    int gasolineGauge;
public:
    Car(int gas) : gasolineGauge(gas) { }
    ~Car() { }
    int GetGasGauge() const {
        return gasolineGauge;
    }
};

class HybridCar : public Car {
    int electricGauge;
public:
    HybridCar(int gas, int elec) : Car(gas), electricGauge(elec) { }
    ~HybridCar() { }
    int GetElecGauge() cosnt {
        return electricGauge;
    }
};

class HybridWaterCar : public HybridCar {
    int waterGauge;
public:
    HybridWaterCar(int gas, int elec, int water) : HybridCar(gas,elec), waterGauge(water) {
        //
    }
    ~HybridWaterCar() { }
    void ShowCurrentGauge() const {
        cout<<"잔여 가솔린: "<<GetGasGauge()<<endl;
        cout<<"잔여 전기량: "<<GetElecGauge()<<endl;
        cout<<"잔여 워터량: "<<waterGauge<<endl;
    }
};

main() {
    HybridWaterCar hbw(30, 20, 10);
    hbw.ShowCurrentGauge();
    return 0;
}