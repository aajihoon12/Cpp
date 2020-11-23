#include <iostream>
namespace mystd {
    using namespace std; //std사용은 이름 붙이기임 사실..

    class ostream {
    public:
        ostream& operator<< (char * str) {
            printf("%s", str);
            return *this;
        }
        ostream& operator<< (char str) {
            printf("%c", str);
            return *this;
        }
        ostream& operator<< (int num) {
            printf("%d", num);
            return *this;
        }
        ostream& operator<< (double e) {
            printf("%g", e);
            return *this;
        }
        void operator<< (ostream& (*fp)(ostream &ostm)) {
            fp(*this);
        }
    };

    ostream& endl(ostream &ostm) {
        ostm<<'\n';
        fflush(stdout);
        return ostm;
    }
}

main() {
    using mystd::cout;
    using mystd::endl;

    cout<<3.14<<endl<<123<<endl;
    return 0;
}