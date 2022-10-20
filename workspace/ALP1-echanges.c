#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	int a, b, c, temp;

	printf("Entrez un entier: \n");
	scanf("%d", &a);

	printf("Entrez un entier: \n");
	scanf("%d", &b);

	printf("Entrez un entier: \n");
	scanf("%d", &c);

	temp = b;
	b = c;
	c = a;
	a = temp;

	printf("a=%d, b=%d, c=%d\n", a, b, c);

	return 0;
}