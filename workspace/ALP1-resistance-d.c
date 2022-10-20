#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	double req, temp;
	
	for(int i = 0 ; i < 3 ; i++) {
		printf("Entrer la valeur de la resistance n°%d\n", i);
		scanf("%lf", &temp);
		req +=  1 / temp;
	}
	req = 1 / req;

	printf("La résistance équavalente est %lf\n", req);

	return 0;
}