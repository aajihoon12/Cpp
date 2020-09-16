#include <iostream>
int BoxVolumn(int length, int width, int height) {
    return length * width * height;
}

int BoxVolumn(int length, int width) {
    return length * width * 1;
}

int BoxVolumn(int length) {
    return length * 1 * 1;
}

int BoxVolumn() {
    return 1;
}

main() {
    std::cout<<"[3, 3, 3]: "<<BoxVolumn(3,3,3)<<std::endl;
    std::cout<<"[5, 5, D]: "<<BoxVolumn(5,5)<<std::endl;
    std::cout<<"[7, D, D]: "<<BoxVolumn(7)<<std::endl;
    std::cout<<"[D, D, D]: "<<BoxVolumn()<<std::endl;
    return 0;
}