#include <iostream>
using namespace std;

main() {
    int num1,num2;
    cin>>num1>>num2;

    try{
        if(num2==0)
            throw num2;
        cout<<"나눗셈의 몫: "<< num1/num2 <<endl;
        cout<<"나눗셈의 나머지: "<< num1%num2 <<endl;
    }catch(int ex) {
            cout<<"제수는 "<<ex<<"이 될 수 없습니다."<<endl;
            cout<<"프로그램을 다시 실행하세요."<<endl;
    }   
    cout<<"end of main"<<endl; 
    return 0;
}