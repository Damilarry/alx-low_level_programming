#include "stdio.h"

/**
 * main - Entry point
 * 
 * Description - 'prints the alphabet, in lowercase'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
chat c = 'a';
while (c <= 'z')
{
putcha(c);
c++;
}
putchar('\n');
}
