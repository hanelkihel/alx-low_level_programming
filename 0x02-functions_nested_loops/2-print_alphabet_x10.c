#include "main.h"
/**
 * print_alphabet - print all alphabet in lowercase*10
 */
void print_alphabet(void)
{
char ch;
int i = 0;
while (i < 10)
{
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
i++;
}
}
