#include <iostream>
/*
This is first comment
*/
using namespace std;
int main2(){
    for(int first =10; first <20; first = first + 1){
        cout << "Value of first : " <<first << endl;
        if(first >16){           //with break statement
        break;
        }
    }
    // cout << "Final value first:" << first <<endl;
    return 23;
}
int main(){
    int first = main2();
    cout << "Value is first :" <<first<<endl;
    return 0;
}

