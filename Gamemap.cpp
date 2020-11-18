#include <iostream>
#include <curses.h>


int main(){
    WINDOW *w;
    w = initscr();
    curs_set(0);    //visible cursor
    using namespace std;
    int max_y = LINES-1, max_x =COLS-1;
    // string str_var = "max_y,max_x ;" + to_string(int(LINES))+"&"+to_string(int(COLS));
    printw("*************************************************************************");    //start main
    move(1,0);  addch('*'); mvaddch(5,0,'*');mvaddch(10,0,'*');mvaddch(15,0,'*');mvaddch(20,0,'*');mvaddch(25,0,'*');
    move(1,72);  addch('*'); mvaddch(5,72,'*');mvaddch(10,72,'*');mvaddch(15,72,'*');mvaddch(20,72,'*');mvaddch(25,72,'*');    
    mvprintw(max_y/2,COLS/8,"Game Start");
    mvaddch(max_y -1,COLS -1,'E');
    printw("*************************************************************************");
    getch();    //wait keyboard
    //end main 
    endwin();
    return 0;
}
