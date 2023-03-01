#include <iostream>
#include <sstream>
using namespace std;

class Book { // this is a "CLASS"
    private: //data hiding (-> Enapsulation) | cannot access from .(dot) oparator
        string title;
        int page, readPage;
    public:
        //method, in c we call "Member Function"
        Book(string title, int page) { // explicit "กำหนดค่าจากภายนอก" กำหนดหรือไม่ก็ได้
            //this are pointer use "->" to access data member
            this->title = title;
            this->page = page;
            this->readPage = 0;
        }

        void read(int page) {
            if(page < 0) {
                return; // mean exit for function
            }
            readPage += page; // start looking at local variable -> parameter -> data member(attribute) -> global
            if (readPage > this->page) {
                readPage = this->page;
            }
        }

        string getTitle() {return title;}
        int getPage() {return page;}
        int getReadPage() {return readPage;}

        string toString() {
            stringstream ss;
            ss << title << " (" << readPage << "/" << page << ")";
            return ss.str();            
        }
};

int main() { 
    // declare instance (object) {instantiate}
    Book book("Introduction To C++", 200); // This is a Object
    Book pythonBook("Python Book", 210); // This is also a Object
    Book gitBook("Git Book", 80); // This is also a Object

    cout << book.toString() << endl; // we call function in class then DONT YOU FUCKING FORGOT () !!!!
    cout << pythonBook.toString() << endl;
    cout << gitBook.toString() << endl;
    cout << "-------------------------------------" << endl;

    Book *books[5];
    books[0] = &book;
    books[1] = &pythonBook;
    books[2] = &gitBook;
    books[3] = new Book("Future of Java", 360); // new [class name] = malloc in c++
    books[4] = new Book("Harry Potter and Where to Find Them", 700);

    gitBook.read(50);
    books[0]->read(2);
    gitBook.read(50);
    pythonBook.read(-5);
    

    for(int i = 0; i < 5;i++) {
        cout << "Title: " << books[i]->getTitle() << endl;
        cout << "Page: " << books[i]->getReadPage() << '/'<< books[i]->getPage() << endl;
    }
    return 0;
}