#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	int remaining = 10, number = 1 + rand() % 100, temp;
	printf("<Debug> %d\n", number);

	while(remaining > 0) {
		printf("Entrez un nombre entre 1 et 1000: ");
		scanf("%d", &temp);
		printf("%d essai(s) restant(s)\n", remaining--);

		if(temp == number) {
			printf("Bravo !");
			break;
		}

		printf("%s\n", temp > number ? "trop grand" : "trop petit");
	}
	printf("La solution était %d\n", number);
	return 0;
}