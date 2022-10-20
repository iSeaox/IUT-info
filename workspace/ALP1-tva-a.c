#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	int tauxTVA, prixHT;
	float prixTTC;

	scanf("%d", &prixHT);
	scanf("%d", &tauxTVA);

	prixTTC = prixHT + prixHT * tauxTVA / 100.0;
	printf("Prix TTC -> %.2f\n", prixTTC);

	return 0;
}