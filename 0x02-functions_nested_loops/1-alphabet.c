#include "stdio.h"

/**
 * main - Entry point
 * 
 * Description - print the alphabet, in lowercase using only _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c = 'a';

while (c <= 'z')
{

putchar(c);
c++;
}

_putchar('\n');
}
