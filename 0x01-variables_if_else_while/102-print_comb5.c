#include <stdio.h>
/**
* main - Program entry point
*
* Return: 0 on success. Error code otherwise
*/
int main(void)
{
int i, j;

for (i = 0; i <= 99; i++)
{
for (j = i; j <= 99; j++)
{
if (i != j)
{
putchar(i / 10 + '0');
putchar(i % 10 + '0');
putchar(' ');
putchar(j / 10 + '0');
putchar(j % 10 + '0');
if (i != 99 || j != 98)
{
putchar(',');
putchar(' ');
}
}
}
}
return (0);
}
