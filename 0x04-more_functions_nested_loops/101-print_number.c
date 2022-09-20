#include "main.h"
/**
 * print_number - Prints a number
 * @n: The number to print
 */
void print_number(int n)
{
int num = n;

if (n < 0)
{
_Putchar('-');
num = -num;
if (num > 9)
{
print_number(num / 10);
}
_putchar(num % 10 + '0');
}