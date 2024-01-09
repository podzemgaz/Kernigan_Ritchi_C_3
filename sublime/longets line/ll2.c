#include "stdio.h"

#define START 10 // starting size of array

char *getarr(int size);
int readline(char s[], int lim);

int main(int argc, char const *argv[])
{

	int c, count, size;
	count = 0;
	size = START;
	char *line;


	while (((c = getchar()) != EOF) && count < size) {
		line += c;
		
	}

	printf("%s\n", line);


	return 0;
}

// getting array of size
char *getarr(int size) {
	 char arr[size]; 
	 char *carr = arr;

	 return carr;
}

