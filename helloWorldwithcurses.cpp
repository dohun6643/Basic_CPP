#include <iostream>
#include <curses.h>
using namespace std;
#include <string>
#include <string.h>

int main(){
    initscr();
    printw("Hello Ncurse!");
    refresh(); //end main
    getch();
    endwin();
    return 0;
}