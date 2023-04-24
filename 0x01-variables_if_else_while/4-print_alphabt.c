#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: character in lower and upper case
 * Return: Always 0 (Success)
 */
int main(void)
{
	char character = 'a';

	while (character <= 'z' && character != 'e' && character != 'q')
	{
		putchar(character);
		character++;
	}
	putchar('\n');
	return (0);
}
