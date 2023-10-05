#include <stdio.h>
/**
 * main - fonction that print numbers
 *
 * Return:Always 0 (success)
 */

int main(void)
{
	int i;
	char num[] = "0123456789";
	for(i = 0; i < 10; i++)
{
	putchar(num[i]);
}
return (0);
}
