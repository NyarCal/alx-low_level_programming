#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void _print_rev_recursion(char *str)
{
  if(*str)
    {
      reverse(str + 1);
      printf("%c", *str);
    }
}
