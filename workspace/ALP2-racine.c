#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
	for(int i = 0 ; i < 10 ; i++) {
		printf("racine de %d= %lf\n", i, sqrt(i));
	}

	return 0;
}