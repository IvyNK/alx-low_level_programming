#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void reset_to_98(int *n);
int main(void)
{
	int n;
	int *p;

	p = &n;
	n = 402;
	printf("n = %d\n", n);
	*p = 98;
	printf("n = %d\n", n);
	return (0);
}
