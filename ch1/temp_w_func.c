#include <stdio.h>

float fahr_to_celcius(int fahr);

int main() {
  printf(" °F");
  printf("\t");
  printf("   °C\n");

  for (int i = 300; i >= 0; i -= 50)
    printf("%3d\t%5.1f\n", i, fahr_to_celcius(i));

  return 0;
}

float fahr_to_celcius(int fahr) { return 5.0 / 9.0 * (fahr - 32.0); }
