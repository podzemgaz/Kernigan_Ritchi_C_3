#include <stdio.h>

/* copy input to output; 1s version */

int main(int argc, char const *argv[])
{
	int c;

	c = getchar();
	while(c != EOF) {
		putchar(c);
		c = getchar();
	}

	return 0;
}