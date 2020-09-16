#include <iostream>
int BoxVolumn(int length, int width=1, int height=1);

main() {
    std::cout<<"[3, 3, 3]: "<<BoxVolumn(3,3,3,)<<std::endl;
    std::cout<<"[5, 5, D]: "<<BoxVolumn(5,5)<<std::endl;
    std::cout<<"[7, D, D]: "<<BoxVolumn(7)<<std::endl;
    std::cout<<"[D, D, D]: "<<BoxVolumn()<<std::endl;
    return 0;
}

int BoxVolumn(int length, int width, int height) {
    return length * width * height;
}