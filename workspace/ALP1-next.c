#include <stdio.h>

int main(int argc, char const *argv[]) {
	int maxJours[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int jour, mois, annee;
	scanf("%d", &jour);
	scanf("%d", &mois);
	scanf("%d", &annee);

	if(annee % 4 == 0) {
		if(annee % 100 == 0) {
			if(annee % 400 == 0) {
				maxJours[1] += 1; // Annee bissextile
			}
		}
		else {
			maxJours[1] += 1; // Annee bissextile
		}
	}
	
	if(jour + 1 > maxJours[mois - 1]) {
		jour = 1;
		mois++;
		if(mois > 12) {
			mois = 1;
			annee += 1;
		}
	}
	else {
		jour++;
	}
	printf("%d/%d/%d\n", jour, mois, annee);
}