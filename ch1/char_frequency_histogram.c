#include <stdio.h>

#define ALPHABET_LENGTH 26

int main() {
  int c;
  int char_freq[ALPHABET_LENGTH];

  for (int i = 0; i < ALPHABET_LENGTH; ++i)
    char_freq[i] = 0;

  while ((c = getchar()) != EOF) {
    if (c < 65 || c > 122)
      continue;
    if (65 <= c && c <= 96) {
      ++char_freq[c - 'A'];
    }
    if (97 <= c && c <= 122) {
      ++char_freq[c - 'a'];
    }
  }

  printf("\n");
  printf("Character frequency histogram");
  printf("\n");

  for (int i = 0; i < ALPHABET_LENGTH; ++i) {
    putchar(i + 'a');
    printf(" ");

    for (int j = 0; j < char_freq[i]; ++j)
      printf("|");

    printf("\n");
  }
}
