#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - check the code
 *@str: String to be reversed
 * Return: Always 0.
 */
void _print_rev_recursion(char *str)
{
if (*str)
{
_print_rev_recursion(str + 1);
printf("%c", *str);
}
}
