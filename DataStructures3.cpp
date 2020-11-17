#include <iostream>
using namespace std;
#include <string>
#include <string.h>


struct Book {
    string subject;
    char author[50];
};
int main() {
    struct Book Book1; //Declare Book1 of type Book
    struct Book Book2; //Declare Book2 of type Book
    Book1.subject = "C++ Programming";
    strcpy(Book1.author,"Chand Miyan");
    cout << "Book 1 subject :" << Book1.subject <<endl;
    // printBook(&Book1);
    cout << "Book1 subject :" <<Book1.subject << endl;
    return 0;
}
void printBook(struct Book*book){
    cout << "printBook subject :" <<book->subject<<endl;
    book->subject="Change subject in function";
}