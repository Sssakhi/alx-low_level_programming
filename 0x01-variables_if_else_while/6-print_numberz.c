#include <stdio.h>
/**
 * main - foction that prints numbers
 *
 * return: Always 0 (success)
 */
int main(void)
{
	int i;
	char num[] = "0123456789";

	for (i = 0; i < 10; i++)
	{
		putchar(num[i]);
	}
	putchar('\n');
	return (0);
}
