#include <iostream>

void swap(int *num1, int* num2) {
    int temp;
    temp = *num2;
    *num2 = *num1;
    *num1 = temp;
}

void swap(char *c1, char *c2) {
    int temp;
    temp = *c2;
    *c2 = *c1;
    *c1 = *c2;
}

void swap(double *d1, double *d2) {
    double temp;
    temp = *d2;
    *d2 = *d1;
    *d1 = temp;
}

main() {
    int num1=20, num2=30;
    swap(&num1, &num2);
    std::cout<<num1<<' '<<num2<<std::endl;

    char ch1='A', ch2='B';
    swap(&ch1, &ch2);
    std::cout<<ch1<<' '<<ch2<<std::endl;

    double db1=1.111, db2=5.555;
    swap(&db1, &db2);
    std::cout<<db1<<' '<<db2<<std::endl;

    return 0;
}