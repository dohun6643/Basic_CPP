#include <iostream>
using namespace std;

double division(int a, int b) {
    int result = 0;
    try {
        if (b == 0) { throw "Division by zero condition!";}
        result = a / b;
    } catch (const char *msg) {
        cout << " Execption caught : " << msg << endl;
    }catch ( std ::exception msg) { cout << "caught in main() :" <<msg.what()<< endl;}
    return result;
}
int main(){
    int first = 50; int second = 0;
    try {
        double third = division(first, second);
        cout << "Execption caught in try :" << third << endl;
        return -1;
    }   catch (std::exception msg) {
        cout << "Exeption caught in main()" <<msg.what() << endl;
        return -1;
    }
    return 0;
}
