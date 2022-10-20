#include <stdio.h>
#include <stdlib.h>

int cube(int n);
int max(int a, int b);
int aleatoire(int min, int max);


int main(int argc, char const *argv[]) {
	for(int i = 0 ; i < 5 ; i++) {
		printf("%d\n", aleatoire(4, 20));
	}

	printf("cube de 3: %d", cube(3));
	printf("max de 1 et 5: %d", max(1, 5));

	return 0;
}

int cube(int n) {
	return n * n * n;
}

int max(int a, int b) {
	if(a < b) {
		return b;
	}
	return a;
}

int aleatoire(int min, int max) {
	return min + rand() % (max - min + 1);
}