#include <iostream>
#include "ref.cpp"

using namespace std;
extern int max();
extern int get_num();
int main() {
    int first = get_num();
    int second = get_num();
    
    // cout << "Max value is :" <<result <<endl;
    cout << "Max value is :" <<max(second,first)<<endl;
    return 0;

}


