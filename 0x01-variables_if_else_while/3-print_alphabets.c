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
	char CHARACTER = 'A';

	while (character <= 'z')
	{
		putchar(character);
		character++;
	}
	while (CHARACTER <= 'Z')
	{
		putchar(CHARACTER);
		CHARACTER++;
	}
	putchar('\n');
	return (0);
}
