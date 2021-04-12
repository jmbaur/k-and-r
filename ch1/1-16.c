#include <stdio.h>
#define MAXLINE 1000

void copy(char to[], char from[]) {
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}

int mygetline(char s[], int lim) {
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;

  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

int main() {
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  while ((len = mygetline(line, MAXLINE)) > 0)
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  if (max > 0) {
    int length, i;
    for (i = 0; i < MAXLINE && longest[i] != '\0'; ++i)
      length++;
    printf("\nlongest string:\n");
    printf("length: %d\n", length);
    printf("content: %s", longest);
  }
  return 0;
}
