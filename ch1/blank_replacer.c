#include <stdio.h>

int main() {
  int c;
  int prev_blank = 0;
  while ((c = getchar()) != EOF) {
    if (prev_blank == 1 && c == ' ') {
      continue;
    } else if (prev_blank == 1) {
      prev_blank = 0;
    } else if (c == ' ') {
      prev_blank = 1;
    }
    putchar(c);
  }
}
