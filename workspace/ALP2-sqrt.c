#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(int argc, char const *argv[]) {
	long start;
	double current = 1, number, epsylon;
	printf("Entrer un nombre positif: ");
	scanf("%lf", &number);
	printf("Entrer la précision: ");
	scanf("%lf", &epsylon);

	start = time(NULL);
	while(fabs(sqrt(number) - current) > epsylon) {
		current = (current + (number / current)) * 0.5;
		
		if(current * current == number) {
			break;
		}
	}
	printf("racine de %.lf= %.30lf  (en %ld sec)\n", number, current, time(NULL) - start);
	return 0;
}