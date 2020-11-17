#include <iostream>
using namespace std;
#define MAX 3

int main(){
    int var[MAX] = {10,100,200}, *ptr_first = var;  // array is same pointer
//int *ptr_second = &var;
for (int i = 0; i < MAX; i++){
    cout << "Array var["<< i <<"] =" << var[i] <<",address:"<< &var[i] << endl;
    cout << "Pointer var[" << i << "] = " << *ptr_first << ", addr :" << ptr_first << endl;
    ++ptr_first;          // point to the next location
}
int *ptr_second;
for (int i = MAX-1; i>= 0; i--){
    ptr_second = &var[i];
    cout << "...."<<*ptr_second << ", addr: "<< ptr_second << endl;
}
return 0;
}


