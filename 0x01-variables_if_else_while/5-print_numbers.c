#include <stdio.h>
/**
 * main - Start point
 * Description: Display all base 10 single digit integers
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%i", i);
	}
	putchar('\n');

	return (0);
}
