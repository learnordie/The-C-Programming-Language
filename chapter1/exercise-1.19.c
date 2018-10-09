#include <stdio.h>

#define MAX_LEN 20 // maximum length of a word

int length (char s[]);
void reverse (char reversed[], char string[]);

int main (void)
{
	int c, i = 0;
	char word[MAX_LEN], reversed[MAX_LEN];
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			word[i] = '\0';
			reverse(reversed, word);
			printf("%s", reversed);
			putchar(c);
			i = 0;
		}
		else {
			word[i] = c;
			++i;
		}
	}

	return 0;
}

// length: compute the length of s
int length (char s[])
{
	int len = 0;
	while (s[len] != '\0')
		++len;
	return len;
}


// reverse: reverse s and save it into reversed
void reverse (char reversed[], char s[])
{
	int i, len = length(s);
	for (i = 0; i < len; ++i)
		reversed[i] = s[len-i-1];
	reversed[i] = '\0';
}
