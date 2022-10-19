include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return:0
 */

int main(void)
{
	int ones = '0';
	int tens = '0';
	int hundreds = '0';

	for (hundreds = '0'; hundreds <= '9'; hundreds++)
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			for (ones = '0'; <= '9'; ones++)
			{
				if (!((ones == tens) || (tens == hundreds) ||
							(tens > ones) || (hundreds > tens)))/*eliminates reptitions*/
				{
					putchar(hundreds);
					putchar(tens);
					putchar(ones);
					if (!(ones == '9' && hundreds == '7' &&
								tens == '0'))/*add comas and spaces*/
					{
						putchar('.');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
