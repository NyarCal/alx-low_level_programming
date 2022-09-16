#include "main.h"

/**
 *positve_or_negative -checkes if positive or not
 *@i-integer to be checked
 *Return- always return 0
 */
int positive_or_negative(int i)
{
  if (i >== 0)
    printf("%d is a positive number\n", i);
  else
    printf("%d is a negative number\n", i);
  return (0);
}
