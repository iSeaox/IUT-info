#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[]) {
	int xA, yA, xB, yB;
	float dist;

	printf("Entrez xA\n");
	scanf("%d", &xA);

	printf("Entrez yA\n");
	scanf("%d", &yA);

	printf("Entrez xB\n");
	scanf("%d", &xB);

	printf("Entrez yB\n");
	scanf("%d", &yB);

	dist = sqrt((xB - xA) * (xB - xA) + (yB - yA) * (yB - yA));
	printf("La distance entre A et B est %f\n", dist);

	return 0;
}