#include <stdlib.h>
#include <stdio.h>

#define MAX 10
#define NO 0
#define YES 1

int main(){

  int ISWORD = YES;
  int current;
  int lengthArr[MAX];
  int letterCount = 0;

  /* Initialise array elements to be 0 */
  for (int i=0;i<MAX;i++){
    lengthArr[i] = 0;
  }

  while ((current = getchar()) != EOF)
  {
    /* Increases letter count for every letter we see */
    ++letterCount;

    /* If a non-letter char, leave the inside of word and decrement letter counter */
    if (current ==' '|| current == '\t' || current == '\n')
    {
      ISWORD = NO;
      --letterCount;
    }

    /* Checks if we've left the inside of a word. If so, add value to array count. */
    if (ISWORD == NO)
    {
      if (letterCount != 0 && letterCount <= MAX)
        ++lengthArr[letterCount];
      ISWORD = YES;
      letterCount = 0;
    }
  }

  for(int i=1; i <= MAX; ++i)
  {
    printf("|%2d| ", i);
    for(int j = 0; j < lengthArr[i]; ++j)
      putchar('*');
    putchar('\n');
  }
  return 0;
}
