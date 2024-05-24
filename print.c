#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int *p;
	p = &n;

	printf("%d\n", n);
	printf("%d\n", *p);


}
