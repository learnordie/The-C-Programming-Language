#include <stdio.h>

int main(void)
{
	int fahr;
	float celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	printf("Fahr\tCelsius\n");
	printf("----\t-------\n");

	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32);
		printf("%4d\t%7.1f\n", fahr, celsius);
		fahr += step;
	}
	
	return 0;
}
