#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 48;
	int b = 65;

	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	while (b <= 70)
	{
		putchar (b);
		b++;
	}
	{
		putchar('\n');
	}
	return (0);
}
