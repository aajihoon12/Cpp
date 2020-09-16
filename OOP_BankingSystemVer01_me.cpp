#include <stdio.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
#define LEN 100

typedef struct _account {
    int acNum;
    char cusName[LEN];
    int balance;
}Account; //계좌

void PrintMenu();
void MakeAccount();
void Deposit();
void Withdraw();
void InquiryAllAc();


Account acManager[LEN]; //계좌 관리 프로그램
int acMNum;

main() {
    int choice;

    while(1) {
        PrintMenu();
        printf("선택: "); scanf("%d", &choice);

        if(choice == 5)
            break;

        switch(choice) {
        case 1:
            MakeAccount();
            break;
        case 2:
            Deposit();
            break;
        case 3:
            Withdraw();
            break;
        case 4:
            InquiryAllAc();
            break;
        default :
            printf("재입력");
        }
    }
    return 0;
}


void PrintMenu() {
    printf("-----MENU-----\n");
    printf("1. 계좌개설 \n");
    printf("2. 입 금 \n");
    printf("3. 출 금 \n");
    printf("4. 계좌정보 전체 출력 \n");
    printf("5. 프로그램 종료 \n\n");
}

void MakeAccount() {
    Account ac;
    int acNum;
    char cusName[LEN];
    int balance;

    printf("[계좌 개설] \n");
    printf("1.계좌 번호: "); scanf("%d", &ac.acNum);
    printf("2.고객 이름: "); scanf("%s", cusName);
    printf("3.잔 고: "); scanf("%d", &ac.balance);
    strcpy(ac.cusName, cusName);

    acManager[acMNum++] = ac;
}

void Deposit() {
    int acNum;
    int i;
    int balance;

    printf("[입 금] \n");
    printf("계좌 번호?: "); scanf("%d", &acNum);
    printf("입금 금액?: "); scanf("%d", &balance);

    for(i=0; i<acMNum; i++) 
        if(acManager[i].acNum == acNum)
            break;

    acManager[i].balance += balance;

    printf("입금 완료! 현재 잔고: %d \n\n", acManager[i].balance);
}

void Withdraw() {
    int acNum;
    int i;
    int balance;

    printf("[출 금] \n");
    printf("계좌 번호?: "); scanf("%d", &acNum);
    printf("출금 금액?: "); scanf("%d", &balance);

    for(i=0; i<acMNum; i++) 
        if(acManager[i].acNum == acNum)
            break;

    if(acManager[i].balance <= balance)
        acManager[i].balance = 0;
    else
        acManager[i].balance -= balance;

    printf("출금 완료! 현재 잔고: %d \n\n", acManager[i].balance);
}

void InquiryAllAc() {
    for(int i=0; i<acMNum; i++) {
        printf("1. 계좌 번호: %d \n", acManager[i].acNum);
        printf("2. 고객 이름: %s \n", acManager[i].cusName);
        printf("3. 잔액 정보: %d \n\n", acManager[i].balance);
    }
}