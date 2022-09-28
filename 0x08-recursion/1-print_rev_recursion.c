#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void _print_rev_recursion(char *str)
{
  if(*str)
    {
      _print_rev_recursion(str + 1);
      printf("%c", *str);
    }
}
