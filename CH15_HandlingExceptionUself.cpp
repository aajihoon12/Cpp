#include <iostream>
using namespace std;

main() {
    int num1,num2;
    cin>>num1>>num2;

    try{
        if(num2==0)
            throw num2;
        cout<<"�������� ��: "<< num1/num2 <<endl;
        cout<<"�������� ������: "<< num1%num2 <<endl;
    }catch(int ex) {
            cout<<"������ "<<ex<<"�� �� �� �����ϴ�."<<endl;
            cout<<"���α׷��� �ٽ� �����ϼ���."<<endl;
    }   
    cout<<"end of main"<<endl; 
    return 0;
}