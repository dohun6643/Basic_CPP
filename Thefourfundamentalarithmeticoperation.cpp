#include <iostream>

using namespace std;

int main(){
    int x,y;
    char ch;
    while(1){
        cout << "숫자입력 : " ;
        cin >>  x ;
        cout << "숫자입력 : " ;
        cin >>  y ;
        int add = x + y;
        cout << "Addition Result : " <<add << endl;
        int sub = x - y ;
        cout << "Subtraction Result : " << sub << endl;
        int multiple = x * y ;
        cout << "Multiplication Result : " <<multiple << endl;
        double divide = double(x) / double(y) ;
        cout << "Division Result : " << divide << endl;
        cout << "Do you want To Continue the Calculation? (N/Y) " ; 
        cin >> ch ;
    if (ch == 'N'){  
    cout << "End The Calculation ! " << endl;
        break;}
    else
        continue;
    }
    return 0;
}
