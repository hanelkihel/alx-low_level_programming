#include <stdio.h>
/**
 * main -prints all possible combinations of single-digit numbers.
 * followed by a new line, using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
for (n = 48; n < 58; n++)
{
putchar(n);
if (n != 57)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
