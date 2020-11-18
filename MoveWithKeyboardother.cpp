#include <iostream>
#include <curses.h>
#define PLAYER '*'
#define WALL 'W'
#define OPPONENT 'O'
#define E_TRACE ''
using namespace std;

int init(){
    WINDOW *w;
    w = initscr();
    curs_set(0); //visible cursor
    return 0;
}

int Movinggame(void){
    using namespace std;
    keypad(stdscr, TRUE);
    timeout(30);                                                //control game speed
    int y = LINES - 1, x = COLS - COLS, move_x = 0, move_y = 0; //start main
    int ch = 'y';                                               //define integer for compare with define
    while ((ch != 'q') && (ch != 'Q'))
    {
        mvaddch(++move_y, ++move_x, OPPONENT); //auto moving
        mvaddch(y, x, PLAYER);
        mvaddch(10, 5, WALL);
        mvaddch(11, 5, OPPONENT);
        ch = getch();
        switch (ch)
        {
        case KEY_UP:
        case 'w':
            y = y - 1;
            break;
        case KEY_DOWN:
            y = y + 1;
            break;
        case KEY_LEFT:
            x = x - 1;
            break;
        case KEY_RIGHT:
            x = x + 1;
            break;
        }
    }      
    return 0;
}

int endprogram(){
    endwin();
    return 0;
}
