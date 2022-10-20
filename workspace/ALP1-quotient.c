#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	int in_a, in_b;
	printf("Entrer un nombre entier (1/2)\n");
	scanf("%d", &in_a);

	printf("Entrez un nombre entier (2/2)\n");
	scanf("%d", &in_b);

	printf("Le reste de %d par %d est %d et le quotient entier est %d\n", in_a, in_b, in_a % in_b, (int) in_a / in_b);
	printf("Et le quotient rationnel est %f\n", (float) in_a / in_b);

	return 0;
}