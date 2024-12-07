/* ambersand */
#include <stdio.h>

void addition(int a, int b, int *target){
  *target = a + b;
}

int main(){
  int x, y, answer;
  x = 5;
  y = 15;

  addition(x, y, &answer);
  printf("%d\n", answer);
}