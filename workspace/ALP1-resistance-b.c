#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	double r1, r2, r3;

	scanf("%lf", &r1);
	scanf("%lf", &r2);
	scanf("%lf", &r3);

	printf("La résistance équavalente est %f\n", 1 / (1 / r1 + 1 / r2 + 1 / r3));

	return 0;
}