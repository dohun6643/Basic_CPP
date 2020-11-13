#include <iostream>
/*
This is first comment
*/
using namespace std;
int main2 () {
    int first = 10;
    while( first < 20) {
        cout << "value of first :" <<first<<endl;
        ++first;
    }
    return 0;
}

int main()
{
    // int first = 100;
    int first = main2();
    cout << "Value is first " <<first << endl;
    return 0;
}

