#include <iostream>
using namespace std;

class SortRule {
    virtual bool operator()(int num1, int num2) const =0;
};

class AscendingSort : public SortRule {
    bool operator()(int num1, int num2) const {
        if(num1>num2)
            return true;
        else
            return false;
    }
};
class DescendingSort : public SortRule {
    bool operator()(int num1, int num2) const {
        if(num1<num2) 
            return true;
        else
            return false;      
    }
};

class DataStorge {
    int * arr;
    int idx;
    const int MAX_LEN;
public:
    DataStorge(int arrlen) : idx(0), MAX_LEN(arrlen) {
        arr=new int[arrlen];
    }
    void AddData(int num) {
        if(MAX_LEN<=idx) {
            cout<<"더 이상 저장이 불가능합니다."<<endl;
            return;
        }
        arr[idx++]=num;
    }
    void ShowAllData() {
        for(int i=0;i<idx;i++)
            cout<<arr[i]<<' ';
        cout<<endl;
    }
    void SortData(const SortRule& functor) {
        for(int i=0;i<idx-1;i++) {
            for(int j=0;j<(idx-1)-i;i++) {
                if(functor(arr[j], arr[j+1])) {
                    int tmp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=tmp;
                }
            }
        }
    }
};

main() {
    DataStorge storge(5);
    storge.AddData(40);
    storge.AddData(30);
    storge.AddData(50);
    storge.AddData(20);
    storge.AddData(10);

    storge.SortData(AscendingSort());
    storge.ShowAllData();
    return 0;
}