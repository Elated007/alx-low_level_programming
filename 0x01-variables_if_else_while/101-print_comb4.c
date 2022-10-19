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

	for (hundreds = '0'; hundreds <= '9'; hundreds++)/* prints hundreds digit*/

	{
		for (tens = '0'; tens <= '9'; tens++)/* prints tens digit*/

		{
			for (ones = '0'; <= '9'; ones++)/* prints ones digit*/

			{
				if (!((ones == tens) || (tens == hundreds) ||
							(tens > ones) || (hundreds > tens))) /*eliminates reptitions*/
				{
					putchar(hundreds);
					putchar(tens);
					putchar(ones);
					if (!(ones == '9' && hundreds == '7' &&
								tens == '8')) /*add comas and spaces*/
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
