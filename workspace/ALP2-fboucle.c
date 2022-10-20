#include <stdio.h>
#include <stdlib.h>

int sum(int n);
int produit(int a, int b);
float power(float a, int n);
int factorielle(int n);

int main(int argc, char const *argv[]) {
	printf("sum(n=5): %d\n", sum(5));
	printf("produit(n=5): %d\n", produit(5, 6));
	printf("power(n=-2): %f\n", power(3, -2));
	printf("power(n=2): %f\n", power(3, 2));
	printf("factorielle(n=5): %d\n", factorielle(5));

	return 0;
}

int sum(int n) {
	int acc = 0;
	for(int i = 1; i <= n ; i++) {
		acc += i;
	}
	return acc;
}

int produit(int a, int b) {
	int acc = 0;
	for(int i = 1 ; i <= a ; i++) {
		acc += b;
	}
	return acc;
}

float power(float x, int n) {
	float temp = 1;

	if(n == 0) {
		return 1;
	}

	for(int i = 0; i < abs(n) ; i++) {
		temp *= x;
	}

	return (n < 0) ? 1 / temp : temp;
}

int factorielle(int n) {
	int acc = 1;
	for(int i = 1 ; i <= n ; i++) {
		acc *= i;
	}
	return acc;
}

