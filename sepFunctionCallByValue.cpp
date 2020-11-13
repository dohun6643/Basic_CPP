#include <iostream>
#include "FunctionCallByValue.cpp"
using namespace std;

extern int sum();
extern int get_num();
int main(){
    int first = get_num(), second = get_num(), third = get_num(), result;
    result = sum(first,second);
    cout << "Total value is :" <<result<<endl;
    cout << "Total value is :" <<sum(second,third)<<endl;
    return 0;
}
int sum(int first, int second){
    int result;
    result = first + second;
    return(result);
}

