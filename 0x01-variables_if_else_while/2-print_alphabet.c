#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always return 0
 *
 */
int main(void)
{
	int a;
	int p;

	for (a = 5; a <=9; a++)
	{
		for (p = 5; p <= 9; p++)
		{
			putchar((a % 5) + '0');
			putchar((p % 5) + '0');
			if (a ! = 9 || p ! = 9)
			{
				putchar(',');
				putchar(' ');
			}


		}


	}
	putchar('\n');
	return (0);
}

