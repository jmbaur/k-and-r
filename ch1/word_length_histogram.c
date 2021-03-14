#include <stdio.h>

#define LARGEST 50

int main() {
  int c;
  int cc = 0;
  int histogram[LARGEST];
  int idx_longest;

  for (int i = 0; i < LARGEST; ++i)
    histogram[i] = 0;

  while ((c = getchar()) != EOF) {
    if ((c == ' ' || c == '\t' || c == '\n') && cc < LARGEST) {
      ++histogram[cc];
      cc = 0;
    } else
      ++cc;
  }

  for (int i = LARGEST - 1; i >= 0; --i)
    if (histogram[i] != 0) {
      idx_longest = i;
      break;
    }

  printf("\n");
  printf("Word length histogram");
  printf("\n");
  for (int i = 1; i <= idx_longest; ++i) {
    printf("%2d ", i);

    for (int j = 0; j < histogram[i]; ++j)
      printf("|");

    printf("\n");
  }
}
