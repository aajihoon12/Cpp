#include <iostream>
using namespace std;

class CountryArea {
public:
    const static int RUSSIA = 17057540;
    const static int CANADA = 998467;
    const static int CHINA = 957290;
    const static int SOUTH_KOREA = 9922;
};

main() {
    cout<<"���þ� ����: "<<CountryArea::RUSSIA<<endl;
    cout<<"ĳ���� ����: "<<CountryArea::CANADA<<endl;
    cout<<"�߱� ����: "<<CountryArea::CHINA<<endl;
    cout<<"�ѱ� ����: "<<CountryArea::SOUTH_KOREA<<endl;
    return 0;
}