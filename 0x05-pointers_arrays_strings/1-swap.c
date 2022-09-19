#include "main.h"
#include <stdio.h>
/**
 *swap -swap two integers
 *@a -integer being swaped
 *
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
a = b;
*b = c;
}
