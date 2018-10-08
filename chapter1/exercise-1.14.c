#include <stdio.h>

#define MAX_ASCII 127 // number of ASCII characters

int main(void)
{
	int c;
	int char_histogram[MAX_ASCII];

	for (int i = 0; i <= MAX_ASCII; ++i)
		char_histogram[i] = 0;

	while ((c = getchar()) != EOF) {
		if (! (c == ' ' || c == '\n' || c == '\t'))
			++char_histogram[c];
	}
	
	for (int i = 0; i <= MAX_ASCII; ++i) {
		if(char_histogram[i] != 0) {
			printf("%c | ", i); // %c for characters
			for (int j = 0; j < char_histogram[i]; ++j)
				printf("*");
			printf("\n");
		}
	}

	return 0;
}
