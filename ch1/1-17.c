#include <stdio.h>
#define MAXLINE 1000
#define MAXTOT 100

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
  char curr_line[MAXLINE];
  char longlines[MAXLINE][MAXTOT];

  int len, n;
  while ((len = mygetline(curr_line, MAXLINE)) > 0)
    if (len > 80) {
      copy(longlines[n], curr_line);
      n++;
    }

  printf("\nall lines over 80 characters in length:\n");
  for (int i = 0; i <= n; i++)
    printf("%s", longlines[i]);

  return 0;
}
