#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
int i, j, max;
for (i = 0; str[i] != '\0'; i++)
  ;
if ((i % 2) == 0)
{
for (j = i / 2; str[j] != '\0'; j++)
putchar(str[j]);
}
else
{
for (max = (i - 1) / 2; str[max] != '\0'; max++)
putchar(str[max + 1]);
}
putchar('\n');
}
