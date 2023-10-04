#include <stdio.h>
/**
 * main - foncion that prints alph in lowercasse
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    int i;
    char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for (i = 0; i < 52; i++)
{
  putchar(alph[i]);
}

return (0);
}
