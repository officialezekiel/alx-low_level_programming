#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print's _putchar'
 * Return: 0 (success)
 */
int main(void)
{
	char *str = "_putchar\n";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	return (0);
}
