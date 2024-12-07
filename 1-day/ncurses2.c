/* ncurses2.c */
#include <ncurses.h>

int main()
{
  int x, y;
  initscr();
  clear();
  getyx(stdscr, y, x);
  printw("x = %d\n"
         "y = %d",
         x, y);
  refresh();

  y = 5;
  x = 10;

  move(y, x);
  printw("Over here!");
  refresh();

  getch();
  endwin();
  return 0;
}