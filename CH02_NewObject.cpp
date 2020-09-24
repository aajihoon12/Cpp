#include <iostream>
#include <stdlib.h>
using namespace std;

class Simple {
public:
    Simple() {
        cout<<"I'm simple constructor!"<<endl;
    }
};

main() {
    cout<<"case1: ";
    Simple * sp1 = new Simple;

    cout<<"case2: ";
    Simple * sp2 = (Simple*)malloc(sizeof(Simple));

    cout<<endl<<"end of main"<<endl;
    delete sp1;
    free(sp2);
    return 0;
}