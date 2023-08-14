#include <stdio.h>

/**
 * main - Prints single digit numbers of base 10 starting from 0
 * followed by a new line.
 *
 * Return: 0 (success)
 */
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
