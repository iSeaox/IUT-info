#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	int tauxTVA;
	float prixTTC, prixHT;

	scanf("%f", &prixTTC);
	scanf("%d", &tauxTVA);

	prixHT = prixTTC / (1 + tauxTVA / 100.0);
	printf("Prix HT -> %.2f\n", prixHT);

	return 0;
}