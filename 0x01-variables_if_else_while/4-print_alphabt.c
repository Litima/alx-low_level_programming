#include <stdio.h>

/**
 * main - print alphabets in lower case excluding e and q
 * Return: Always 0
 */
int main(void)
{
	char qe;

	for (qe = 'a'; qe <= 'z'; qe++)
	{
		if (qe != 'e' && qe != 'q')
			putchar(qe);
	}

	putchar('\n');

	return (0);
}
