#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	a = 48;

	while (a <= 56)
	{
		putchar(a);
		putchar(',');
		putchar(' ');
		a++;
	}
	if (a == 57)
	{
		putchar(a);
		write(' ');
		a++;
	}
	return (0);
}
