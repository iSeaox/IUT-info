#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[]) {
	double rayon, surface, perimetre;

	printf("Entrer le rayon (double)\n");
	scanf("%lf", &rayon);

	surface = rayon * rayon * M_PI;
	perimetre = 2 * rayon * M_PI;

	printf("surface = %lf, perimètre = %lf\n", surface, perimetre);

	return 0;
}