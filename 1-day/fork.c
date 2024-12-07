/* fork */
#include <stdio.h>
#include <unistd.h>

int main()
{
  FILE *fd;
  int x;

  x = fork();
  while (1)
  {
    fd = fopen("tmp/test.txt", "a");
    fprintf(fd, "%d\n", x);
    fclose(fd);
    sleep(1);
  }

  return 0;
}
