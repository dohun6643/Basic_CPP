#include <iostream>
using namespace std;
#include <string>
#include <string.h>


int main() {
int first = 100, second = 200;
cout << "Before swap - first, second :" << first << ", " << second << endl;
swap(first, second); /* calling first function to swap the values.*/
cout << "After swap - first, second :" << first << ", " << second << endl;
// After swap - first, second :100, 200

cout << "Before swap by refer - first, second :" << first << ", " << second << endl;
swapByReference(first, second); /* calling function to swap by reference.*/
cout << "After swap by refer - first, second :" << first << ", " << second << endl;
// After swap by reference - first, second :200, 100
return 0;
}
void swap(int x, int y) { // function definition to swap the values.
int temp; temp = x; x = y; y = temp;
}
void swapByReference(int &x, int &y) {
/* same void swap(int x, int y); */
}