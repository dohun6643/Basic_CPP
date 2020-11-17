#include <iostream>
#include <string>
#include <string.h>

using namespace std;

struct Books {
struct Book BookList[5]; string category;
void print_booklist() {
for (int i = 0; i < 5; i++) {
cout << i << ". " << BookList[i].title << endl;
}
};
};
enum categories { COMPUTERS, ARTS, BUSINES,};
int main() {
struct Books BestSell; // Declare Books of type Book
BestSell.category = categories::COMPUTERS;

strcpy(BestSell.BookList[0].title, "Telecom Billing1");
strcpy(BestSell.BookList[0].author, "Yakit Singha1");
BestSell.BookList[0].print_book();
BestSell.print_booklist();

strcpy(BestSell.BookList[1].title, "Telecom Billing2");
strcpy(BestSell.BookList[1].author, "Yakit Singha2");
BestSell.BookList[1].print_book();
BestSell.print_booklist();

strcpy(BestSell.BookList[2].title, "Telecom Billing3");
strcpy(BestSell.BookList[2].author, "Yakit Singha3");
BestSell.BookList[2].print_book();
BestSell.print_booklist();

strcpy(BestSell.BookList[3].title, "Telecom Billing4");
strcpy(BestSell.BookList[3].author, "Yakit Singha4");
BestSell.BookList[3].print_book();
BestSell.print_booklist();

strcpy(BestSell.BookList[4].title, "Telecom Billing");
strcpy(BestSell.BookList[4].author, "Yakit Singha");
BestSell.BookList[4].print_book();
BestSell.print_booklist();

return 0;
}