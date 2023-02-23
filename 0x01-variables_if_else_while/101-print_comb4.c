#include <stdio.h>

/**
* main - Prints all possible different combinations of three digits
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int n, m, l;

	for (n = 0; n <= 7; n++)
	{
		for (m = n + 1; m <= 8; m++)
		{
			for (l = m + 1; l <= 9; l++)
			{
				if (l > m && m > n)
				{
					putchar(n + '0');
					putchar(m + '0');
					putchar(l + '0');
					if (n != 7 || m != 8 || l != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
