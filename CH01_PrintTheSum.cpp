#include <iostream>

main() {
    int num;
    int result = 0;

    for(int i=0; i<5; i++) {
        std::cout<<"정수 입력: ";
        std::cin>>num;
        result += num;
    }

    std::cout<<"SUM: "<<result;
    return 0;
}