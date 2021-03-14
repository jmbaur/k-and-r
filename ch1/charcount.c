#include <stdio.h>

int main() {
  long nc = 0; // sizeof 8 bytes
  while (getchar() != EOF)
    ++nc;
  printf("%ld\n", nc);
}
