#include <stdio.h>
/**
 * main - foction that prints numbers from 0 to 9
 *
 * return:Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
