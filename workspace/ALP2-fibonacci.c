#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	int n, pre_last = 0, last = 1, temp;
	printf("Entrer le nombre d'itération: ");
	scanf("%d", &n);
	if(n <= 1) {
		last = n;
	}
	int i = 2;
	while(i <= n) {
		temp = pre_last + last;
		pre_last = last;
		last = temp;
		printf("<DEBUG> F(%d) = %d\n", i, last);

		i++;
	}

	printf("Le rang %d ième de la suite est %d\n", n, last);
	return 0;
}