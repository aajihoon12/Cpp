#include <iostream>
#include <cstring>
using namespace std;

class Book {
    char * title;
    char * isbn;
    int price;
public:
    Book(char * t, char * i, int p) : price(p) {
        title = new char[strlen(t)+1];
        isbn = new char[strlen(i)+1];

        strcpy(title, t);
        strcpy(isbn, i);
    }
    void ShowBookInfo() {
        cout<<"제목: "<<title<<endl;
        cout<<"ISBN: "<<isbn<<endl;
        cout<<"가격: "<<price<<endl<<endl;
    }
    ~Book() {
        delete []title;
        delete []isbn;
    }
};

class EBook : public Book {
    char * DRMKey;
public :
    EBook(char * t, char * i, int p, char * d) : Book(t, i, p) {
        DRMKey  = new char[strlen(d)+1];
        strcpy(DRMKey, d);
    }
    void ShowEBookInfo() {
        ShowBookInfo();
        cout<<"인증키: "<<DRMKey<<endl;
    }
    ~EBook() {
        delete []DRMKey;
    }
};

main() {
    Book book("좋은 C++", "555-12345-890-0", 20000);
    book.ShowBookInfo();
    cout<<endl;
    EBook ebook("좋은 C++ ebook", "555-1235-890-1", 10000, "fdx9w0i8kiw");
    ebook.ShowEBookInfo();
    return 0;
}