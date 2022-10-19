#include <stdio.h>

/**
 * main - program entry point
 *
 * Return:0
 */

int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z') {
			if ((c != 'q' && c != 'a') && c <= 'z')
				putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
