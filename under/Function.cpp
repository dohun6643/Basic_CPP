#include <iostream>
#include "under/FunctionOther.cpp"
/*
This is first comment
*/
using namespace std;

extern int funcOutside();

int i = 5 ;
int main() {
    int i = funcOutside();
    cout << "return value ;" << i << endl;
    cout << "Scope resolution operator ;" << ::i <<endl;
    return 0 ;
}