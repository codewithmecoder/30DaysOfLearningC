/* ncurses.c */
#include <ncurses.h>

int main()
{
  char letter;
  initscr();
  printw("Press any key");
  refresh();

  letter = getch();
  clear();

  printw("You pushed: '%c'", letter);
  refresh();

  getch();
  endwin();
  return 0;
}
// gcc ncurses.c -o ncurces -lncurses