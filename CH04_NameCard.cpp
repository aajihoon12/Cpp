#include <iostream>
#include <cstring>
using namespace std;

namespace EMP_INFO {
    enum {
        CLERK=1,
        SENIOR,
        ASSIST,
        MANAGER
    };
    //영역 안에서는 무엇이든 할 수 있다.
    //관련 된 작업 수행
    void ShowPosition(int rank) {
    switch(rank) {
        case EMP_INFO::CLERK :
            cout<<"직급: 사원"<<endl;
            break;
        case EMP_INFO::SENIOR :
            cout<<"직급: 주임"<<endl;
            break;
        case EMP_INFO::ASSIST :
            cout<<"직급: 대리"<<endl;
            break;
        case EMP_INFO::MANAGER :
            cout<<"직급: 과장"<<endl;
            break;
        }
    }
}

class NameCard {
    char * name;
    char * business_name;
    char * call;
    int rank;
public:
    NameCard(char * n, char * b, char * c, int r) {
       name = new char[strlen(n)+1];
       business_name = new char[strlen(b)+1];
       call = new char[strlen(c)+1];

       strcpy(name, n); strcpy(business_name, b); strcpy(call, c);
       rank = r;
    }
    void ShowNameCardInfo() {
        cout<<"이름: "<<name<<endl;
        cout<<"회사: "<<business_name<<endl;
        cout<<"전화번호: "<<call<<endl;
        EMP_INFO::ShowPosition(rank);
        cout<<endl;
    }
    NameCard~() {
        delete []name;
        delete []business_name;
        delete []call;      
    }
};

main() {
    NameCard manClerk("Lee", "ABCEng", "010-1111-2222", EMP_INFO::CLERK);
    NameCard manSenior("Hone", "OrangeEng", "010-3333-4444", EMP_INFO::SENIOR);
    NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", EMP_INFO::ASSIST);

    manClerk.ShowNameCardInfo();
    manSenior.ShowNameCardInfo();
    manAssist.ShowNameCardInfo();
    return 0;
}