#include <iostream>
#include <new>
using namespace std;

main() {
    int num=0;

    try{
        num++;
        cout<<num<<"��° �Ҵ� �õ�"<<endl;
        new int[10000][10000];
    }catch(bad_alloc &bad) {
        cout<<"bad.what()"<<endl;
        cout<<"�� �̻� �Ҵ� �Ұ�!"<<endl;
    }
    return 0;
}