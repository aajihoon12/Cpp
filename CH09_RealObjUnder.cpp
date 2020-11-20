#include <iostream>
using namespace std;

class Data {
    int data;
public:
    Data(int num) : data(num) { }
public:
    void ShowData() { cout<<"Data: "<<data<<endl; }
    void Add(int num) { data+=num; }
};

main() {
    Data obj(15);
    obj.Add(17);
    obj.ShowData();
    return 0;
}

