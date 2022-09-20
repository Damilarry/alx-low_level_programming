#include "main.h"
/**
 * rev_string - reverse the string.
 * @s: pointer to string.
 *
 * Return: void.
 */
void rev_string(char *s)
{
int i, j, k, temp;

i = 0;
while (s[i] != '\0')
{
i++;
}
while (k < j)
{
temp = s[k];
s[k] = s[j];
s[j] = temp;
k++;
j--;
}
}
