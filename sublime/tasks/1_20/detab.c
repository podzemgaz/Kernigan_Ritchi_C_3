//v 1
#include <stdio.h>

#define TAB 2 // количество пробелов
#define MAXLINE 1000 // длина максимальной строки

//заменяет символ табуляции на заданное количество пробелов
int main(int argc, char const *argv[])
{
	char line[MAXLINE]; // заготовка под строку
	int c; // заготовка под символ
	int count = 0; // счётчик символов

	while ((c = getchar()) != EOF && count < MAXLINE) {
		if (c == '\t') {
			for (int i = 0; i < TAB; ++i)
			{
				line[count++] = ' ';
			}
		} else {
			line[count++] = c;
		}
	}

	printf("%s\n", line);
	return 0;
}