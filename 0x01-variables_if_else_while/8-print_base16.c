#include <stdio.h>
/**
 * main - prints all single digit numbers of base
 * 16 starting from 0, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int m;
for (n = 48; n < 58; n++)
{
putchar(n);
}
for (m = 97; m < 103; m++)
{
putchar(m);
}
putchar('\n');
return (0);
}
