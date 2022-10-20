#include <stdio.h>
#include <stdlib.h>

#define PRIX_CABLE 0.19
#define HIGH_REMISE_COEF 0.05
#define LOW_REMISE_COEF 0.03
#define TVA_COEF 0.196

int main(int argc, char const *argv[]) {
	double lLivree, prixHT, prixTTC, remiseValue, coutTVA;

	scanf("%lf", &lLivree);

	prixHT = lLivree * PRIX_CABLE;
	if(prixHT >= 500 && prixHT <= 1000) {
		remiseValue = prixHT * LOW_REMISE_COEF;
		prixHT = prixHT - remiseValue;
	}
	else if(prixHT >= 1000){
		remiseValue = prixHT * HIGH_REMISE_COEF;
		prixHT = prixHT - remiseValue;
	}

	coutTVA = prixHT * TVA_COEF;
	prixTTC = prixHT + coutTVA;


	printf("~ FACTURE ~\n");
	printf("\tLonguer Livrée: %.2lfm\n", lLivree);
	printf("\tPrix total HT: %.2lf€\n", prixHT);
	printf("\tValeur remise: %.2lf€\n", remiseValue);
	printf("\tCout TVA: %.2lf€\n", coutTVA);
	printf("\tPrix total TTC: %.2lf€\n", prixTTC);

	return 0;
}