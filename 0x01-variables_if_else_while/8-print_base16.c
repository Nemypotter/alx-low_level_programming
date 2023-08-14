#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 * followed by a new line
 * Return: 0 (success)
 */
int main(void)
{
	int a;

	for (a = 48; a < 64; a++)
	{
		putchar(a);
	}
	for (a = 97; a < 103; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
