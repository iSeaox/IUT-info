#include <stdio.h>

int main(int argc, char const *argv[]) {

	int jour, mois, annee, m1, a1, aS, nS, f;
	scanf("%d", &jour);
	scanf("%d", &mois);
	scanf("%d", &annee);

	if(mois >= 3) {
		m1 = mois - 2;
		a1 = annee;
	}
	else {
		m1 = mois + 10;
		a1 = annee - 1;
	}
	nS = (int) a1 / 100;
	aS = a1 % 100;

	f = jour + aS + (aS / 4) - 2 * nS + (nS / 4) + (26 * m1 - 2) / 10;
	f %= 7;
	if(f < 0) {
		f += 7;
	}
	char* nomJour;
	switch(f) {
		case 0:
			nomJour = "dimanche";
			break;

		case 1:
			nomJour = "lundi";
			break;

		case 2:
			nomJour = "mardi";
			break;

		case 3:
			nomJour = "mercredi";
			break;

		case 4:
			nomJour = "jeudi";
			break;

		case 5:
			nomJour = "vendredi";
			break;

		case 6:
			nomJour = "samedi";
			break;

	}
	printf("ce jour là était un %s\n", nomJour);
}

void monCul(void) {
	return;
}