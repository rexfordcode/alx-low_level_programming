#include <stdio.h>
/**
 * main - Start point
 *
 * Description: Display all the alphabets in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char al;

	al = 'a';
	while (al <= 'z')
	{
		putchar(al);
		al++;
	}
	putchar('\n');

	return (0);
}
