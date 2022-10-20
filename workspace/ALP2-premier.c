#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int premier(int n);
void list_premier();

int main(int argc, char const *argv[]) {
	printf("%d, %d", premier(10), premier(5));
	list_premier();
	return 0;
}

int premier(int n) {
	int racine = ((int) sqrt(n)) + 1;
	for(int i = 2 ; i < racine ; i++) {
		if(n % i == 0) {
			return 0;
		}
	}
	return 1;
}

void list_premier() {
	for(int i = 0 ; i < 1001 ; i++) {
		if(premier(i)) {
			printf("%d\n", i);
		}
	}
}