#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'p' ; a++)
		putchar(a);
	for (a = 'A'; a <= 'P'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
