#include <stdio.h>
#include <ctype.h>
/**
 * main - Alphabet game entry point
 * Return: 0 (Success)
 */

int main(void)
{
int lowerCase = 'a';
while (lowerCase <= 'z')
{
	putchar(lowerCase);
	lowerCase += 1;
}
putchar('\n');
return (0);
}
