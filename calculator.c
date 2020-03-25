#include <stdio.h>
#include <math.h>
#include <string.h>

int assigne(char *color) {

  if (strcmp(color, "black") == 0)
    return 0;
  else if (strcmp(color, "brown") == 0)
    return 1;
  else if (strcmp(color, "red") == 0)
    return 2;
  else if (strcmp(color, "orange") == 0)
    return 3;
  else if (strcmp(color, "yellow") == 0)
    return 4;
  else  if (strcmp(color, "green") == 0)
    return 5;
  else if (strcmp(color, "blue") == 0)
    return 6;
  else if (strcmp(color, "purple") == 0)
    return 7;
  else if (strcmp(color, "gray") == 0)
    return 8;
  else if (strcmp(color, "white") == 0)
    return 9;

    return (-1);
}

int main(void)
{
  char ring1[8];
  char ring2[8];
  char ring3[8];

  printf("%s", "Please write the color of the first ring: \n");
  scanf("%s", ring1);

  printf("\n%s", "Please write the color of the second ring: \n");
  scanf("%s", ring2);

  printf("\n%s", "Please write the color of the third ring: \n");
  scanf("%s", ring3);

  int value1 = assigne(ring1);
  int value2 = assigne(ring2);
  int value3 = assigne(ring3);

  int result = (value1 * 10 + value2) * pow(10, value3);

  printf("\nThe resistor value is %d Ω.\n", result);
  scanf("%s", "Press enter to exit");

  return (0);
}