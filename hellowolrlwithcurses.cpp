#include <iostream>
#include <curses.h>

int main(){
    WINDOW *w;
    w = initscr();
    curs_set(0);    //visible cursor
    using namespace std;
    int max_y = LINES-1, max_x =COLS-COLS;
    printw("Start Hello Ncurse!");     //start main
    move(3,4);  addch('5'); mvaddch(5,4,'5');
    string str_var = "max_y,max_x ;" + to_string(int(LINES))+","+to_string(int(COLS));
    mvaddstr(10,8,str_var.c_str());
    mvprintw(max_y/2,COLS/2,"Middle Hello Ncurse!");
    mvaddch(max_y -1,COLS -1,'E');
    printw("Hello Ncurse!");
    getch();    //wait keyboard
    //end main 
    endwin();
    return 0;
}
