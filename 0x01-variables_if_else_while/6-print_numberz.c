#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print nulbers from 0 to 9n with putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		putchar(number + '0');
		number++;
	}
	putchar ('\n');
	return (0);
}
