#include "main.h"
#include <stdio.h>
/**
 *swap_int: -swap two integers
 *@a: -number being swapped
 *@b: -number being swapped
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
a = b;
*b = c;
}
