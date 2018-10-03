#include <stdio.h>

int main(void)
{
	int c, nb = 0;

	while ((c = getchar()) != EOF) {
		if (c != ' ') {
			putchar(c);
			nb = 0;
		} else {
			++nb;
			if (nb <= 1)
				putchar(c);
		}
	}

	return 0;
}
