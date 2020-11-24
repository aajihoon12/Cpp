#include <iostream>
#include <cstring>
using namespace std;

class Gun {
    int bullet;
public:
    Gun(int bnum) : bullet(bnum) { }
    void Shot() {
        cout<<"BBANG!"<<endl;
        bullet--;
    }
};

class Police {
    int handcuffs;
    Gun * pistol;
public:
    Police(int bnum, int bcuff) : handcuffs(bcuff) {
        if(bnum < 1) 
            pistol = NULL;
        else
            pistol = new Gun(bnum);
    }
    Police(const Police &ref) : handcuffs(ref.handcuffs) {
        if(ref.pistol=!NULL) {
            pistol=new Gun(*(ref.pistol));
        }else
            pistol=NULL;
    }
    Police& operator=(const Police &ref) {
        if(pistol!=NULL)
            delete pistol;

        if(ref.pistol!=NULL) {
            pistol=new Gun(*(ref.pistol));
        }else 
            pistol=NULL;

        handcuffs=ref.handcuffs;
        return *this;
    }
    void PutHandCuff() {
        cout<<"SNAP!"<<endl;
        handcuffs--;
    }
    void Shot() {
        if(pistol==NULL)
            cout<<"Hut BBANG!"<<endl;
        else
            pistol->Shot();
    }
    ~Police() {
        if(pistol!=NULL)
            delete pistol;
    }
};

main() {
    Police pman1(5, 3);
    pman1.Shot();
    pman1.PutHandCuff();

    Police pman2(0, 3);
    pman2.Shot();
    pman2.PutHandCuff();

    Police pman3=pman1;
    pman3.Shot();
    pman3.PutHandCuff();

    pman2=pman1;
    pman2.Shot();
    pman2.PutHandCuff();
    return 0;
} 