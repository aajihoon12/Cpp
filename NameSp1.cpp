#include <iostream>

namespace BestComImp1 {
    void SimpleFunc() {
        std::cout<<"BestCom이 정의한 함수"<<std::endl;
    }
}

namespace ProgComImp1 {
    void SimpleFunc() {
        std::cout<<"Simple이 정의한 함수"<<std::endl;
    }
}

main() {
    BestComImp1::SimpleFunc();
    ProgComImp1::SimpleFunc();
    return 0;
}