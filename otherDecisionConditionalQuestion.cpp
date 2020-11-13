#include <iostream>
/*
This is first comment
*/
using namespace std;

int Example1(){
    int x,y ,var;
    cin >> y ;
    if (y < 10){ var = 30;
    }else{ var = 40;
    }
    cout << "value of var : " << var << endl;
    
    x = (y <10 )? 30:40;
    cout << "value of x :" << x <<endl;
    return 0 ;
}