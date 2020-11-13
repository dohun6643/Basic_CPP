#include <iostream>
/*
This is first comment
*/
using namespace std;
int char1(){
    char ch;
    cin >> ch ;
    if(ch == 'N'){
        cout << "Press" << ch <<"Character !"<<endl;
    }
    cin >> ch ;
    cout << int(ch) << "Press" << ch <<"Character !"<<endl;
    cin >> ch ;
    cout << int(ch) << "Press" << ch <<"Character !"<<endl;
    return 0;
}