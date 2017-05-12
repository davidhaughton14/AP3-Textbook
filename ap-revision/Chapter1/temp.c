#include <stdio.h>
int main()
{
  float fahr, celsius;
  float lower, upper, step;
  lower = 0.0; /* lower limit of temperatuire scale */
  upper = 300.0; /* upper limit */
  step = 20; /* step size */
  celsius = lower;
  printf("%s\t%s","Cels", "Fahr\n");
  while (celsius <= upper) {
    fahr = ((celsius*9)/5) + 32;
    printf("%3.0f\t%6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
