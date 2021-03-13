#include <stdio.h>

/* The preprocessor will do text substitution for these
 * where they exist in the program. */
#define LOWER 0
#define UPPER 300
#define STEP 50

int main() {
  /* Press <Ctrl><Shift>u + B + 0 to make a degree symbol. */
  printf(" °F");
  printf("\t");
  printf("   °C\n");

  /* If an arithmetic operator has integer operands, an
   * integer operation is performed. If an arithmetic
   * operator has one floating-point operand and one integer
   * operand, the integer will be converted to floating
   * point. */
  for (int fahr = UPPER; fahr >= LOWER; fahr -= STEP)
    printf("%3d\t%5.1f\n", fahr, 5.0 / 9.0 * (fahr - 32));
}
