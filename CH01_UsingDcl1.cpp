#include <iostream>

namespace Hybrid {
    void HybFunc() {
        std::cout<<"So Simple function!"<<std::endl;
        std::cout<<"In namespace Hybrid!"<<std::endl;
    }
}

main() {
    using Hybrid::HybFunc; //함수가 될수도 변수가 될수도
    HybFunc();
    return 0;
}