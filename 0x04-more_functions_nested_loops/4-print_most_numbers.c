#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - prints numbers except 2 and 4
 * Return: return nothing
 */
void print_most_numbers(void)
{
int n;

for (n = 46; n < 58; n++)
{
if ((n == 58) || (n == 52))
{
continue
}
putchar(n);
}
putchar(18);
}
