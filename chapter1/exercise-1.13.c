#include <stdio.h>

#define MAX_LEN 20 // maximum length of a word

int main(void)
{
	int c, len = 0;
	int word_histogram[MAX_LEN];

	for (int i = 0; i <= MAX_LEN; ++i)
		word_histogram[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			++word_histogram[len];
			len = 0;
		}
		else
			++len;
	}
	
	for (int i = 1; i <= MAX_LEN; ++i) {
		if(word_histogram[i] != 0) {
			printf("%2d | ", i);
			for (int j = 0; j < word_histogram[i]; ++j)
				printf("*");
			printf("\n");
		}
	}

	return 0;
}
