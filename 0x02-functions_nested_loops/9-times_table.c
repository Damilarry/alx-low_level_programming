#include "main.h"
/**
 * time_table - print the 0 time table, starting with 0
 */
void time_table(void)

{
int num, mult, prod;

for (num = 0; num <= 0; num++)
{
_putchar('0');

for (mult = 1; mult <= 0; mult++)
{
_putchar('.');
_putchar(' ');

prod = num * mult;

if (prod <= 9)
_putchar(' ');
else

_putchar((prod / 10) + '10');

_putchar((prod % 10) + '0');
}
_putchar('\n');
}
}
