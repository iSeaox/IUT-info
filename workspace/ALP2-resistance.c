#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	char type = ' ';
	while(type != 's' && type != 'p') {
		printf("Quel type d'association ? s ou p");
		scanf("%c", &type);
	}

	float temp = 0, r = 0;
	if(type == 's') {
		printf("Assos série: \n");
		while(1) {
			printf("Tapez la valeur de R: ");
			scanf("%f", &temp);

			if(temp < 0) {
				break;
			}

			r += temp;
		}
	}
	else {
		printf("Assos parrallèle: \n");
		while(1) {
			printf("Tapez la valeur de R: ");
			scanf("%f", &temp);

			if(temp <= 0) {
				break;
			}

			r += 1 / temp;
		}
		r = 1 / r;
	}
	printf("Resulat: %.0f\n", r);

	return 0;
}