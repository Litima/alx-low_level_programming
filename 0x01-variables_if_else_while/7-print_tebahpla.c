#include <stdio.h>

/**
 * main - print lower case alphabet in reverse form
 * Return: Always 0
 */
int main(void)
{
	char rf;

	for (rf = 'z'; rf >= 'a'; rf--)
		putchar(rf);

	putchar('\n');

	return (0);
}
