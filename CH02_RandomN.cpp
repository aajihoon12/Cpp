#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

main() {
    srand(time(0));
    
    for(int i=0; i<5; i++) {
        cout<<rand()%100<<endl;
    }
    return 0;
}