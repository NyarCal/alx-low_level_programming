#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - check the string to be printed
 * @t: string to be printed
 * Return: Always 0.
 */
void _puts_recursion(char *t)
{
if (*t == '\0')
return;
printf("%c", *t);
_puts_recursion(++t);
}
