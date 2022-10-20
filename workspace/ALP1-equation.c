#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
	double a, b, c, delta, x1, x2, re, img;
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);

	if(a != 0) {
		delta = b * b - 4 * a * c;
		if(delta >= 0) {
			x1 = (-b - sqrt(delta)) / 2 * a;
			x2 = (-b + sqrt(delta)) / 2 * a;
			if(delta == 0) {
				printf("Une solution: x = %lf\n", x1);	
			}
			else {
				printf("Deux solution: x1 = %lf, x2 = %lf\n", x1, x2);
			}
		}
		else {
			re = -b / 2 * a;
			img = sqrt(-delta) / 2 * a;
			printf("Deux solution: z1 = %lf + %lfj, z2 = %lf - %lfj\n", re, img, re, img);
		}
	}
	else if(b != 0) {
		printf("Une solution: x = %lf\n", -c / b);
	}
	else if(c != 0) {
		printf("Ensemble des solutions infini\n");
	}
	else {
		printf("Pas de solution\n");
	}

	return 0;
}