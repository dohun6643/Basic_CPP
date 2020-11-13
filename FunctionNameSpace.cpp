#include <iostream>
/*
This is first comment
*/
using namespace std;

//#include "under/NameSpacesUsingOthers.cpp"
#include "under/NameSpacesUsingOthers.hpp"
int main(){
    third_space::func();
    funcOutside();
    return 0;
}