#include <stdio.h>

int main(void)
{
	int c, nb = 0, nt = 0, nl = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++nb;
		else if (c == '\t')
			++nt;
		else if (c == '\n')
			++nl;
	}
	printf("# of blanks = %d\n", nb);
	printf("# of tabs   = %d\n", nt);
	printf("# of lines  = %d\n", nl);

	return 0;
}
