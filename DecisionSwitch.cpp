#include <iostream>
using namespace std;
#include <string>
#include <string.h>

int main()
{
    char grade = 'D';
    switch (grade)
    {
        case 'B':
        case 'C': cout << "well done" << endl;
                break;
                default:
                cout <<"invalid grade" << endl;
    }
    return 0;
}