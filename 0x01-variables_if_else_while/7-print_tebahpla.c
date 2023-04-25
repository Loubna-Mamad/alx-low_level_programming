#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: character in lower and case
 * Return: Always 0 (Success)
 */
int main(void)
{
	char character = 'z';

	while (character >= 'a')
	{
		putchar(character);
		character--;
	}
	putchar('\n');
	return (0);
}
