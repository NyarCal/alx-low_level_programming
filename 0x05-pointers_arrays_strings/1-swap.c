#include "main.h"
/**
 *swap -swap two integers
 *@a -integer being swaped
 *
 */
void swap(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
