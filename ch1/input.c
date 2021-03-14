#include <stdio.h>

int main() {
  int c;

  do {
    c = getchar();
    if (c == 10)
      continue;
    printf("This is the value of ");
    putchar(c);
    printf(": %d\n", c);
    if (c == EOF)
      printf("This is the value of EOF: %d\n", c);
  } while (c != EOF);
}
