#include <stdio.h>

/**
 * main - a program that prints the alphabet in lowercase
 *
 * Return: (0) always if success
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
			putchar(ch);
	}
		putchar('\n');
	return (0);
}
