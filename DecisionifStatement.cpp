#include <iostream>
/*
This is first comment
*/
using namespace std;
int main2()
{
    int first = 100;
    if (first == 10)
    {
        cout << "Value of first is 10" << endl;
    }
    else if (first == 30)
    {
        cout << "Value of first is 30" << endl;
    }
    else
    {
        cout << "Value of first is not matching" << endl;
    }
    cout << "Exact value of first is :" << first << endl;
    return 30;
}
int main()
{
    // int first = 100;
    int first = main2();
    cout << "Value is first " <<first << endl;
    return 0;
}

