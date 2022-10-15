#include <stdio.h>

/**
 * main - print numbers in base ten
 * Return: Always 0
 */
int main(void)
{
	int ten;

	for (ten = 0; ten <= 9; ten++)
		printf("%d", ten);

	printf("\n");

	return (0);
}
