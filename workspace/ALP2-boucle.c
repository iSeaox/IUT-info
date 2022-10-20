#include <stdio.h>

int main(int argc, char const *argv[]) {
	int nb_iteration;
	printf("Entrer le nombre d'itération\n");
	scanf("%d", &nb_iteration);

	for(int i = 0 ; i < nb_iteration ; i++) {
		printf("Bonjour\n");
	}
	
	return 0;
}