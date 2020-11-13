#include <iostream>
/*
This is first comment
*/
using namespace std;
namespace first_space {
void func() {
cout << "Inside first_space" << endl;
}
}
namespace second_space {
void func() {
cout << "Inside second_space" << endl;
}
}
using namespace first_space;
int main() {
func();
// Inside first_space
second_space::func();
// Inside second_space
return 0;
}