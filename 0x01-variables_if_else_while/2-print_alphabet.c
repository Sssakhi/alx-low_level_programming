#include <stdio.h>
/**
 * main - fonction that print alphabet in lowcase
 *
 * Return: Always 0 (success)
 */
int main()
{
	int i;
	char alph[] = "abcdefghijklmnopqrstuvwxyz";
	for (i = 0; i < 26; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
