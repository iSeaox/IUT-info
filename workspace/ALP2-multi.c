#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
	int a, b, temp;
	long start;
	while(1) {
		a = 1 + rand() % 100;
		b = 1 + rand() % 10;
		printf("%d x %d = ", a, b);
		start = time(NULL);
		scanf("%d", &temp);
		printf("Temps de réponse: %ld s\n", time(NULL) - start);
		if(temp != a * b) {
			printf("Mauvaise réponse\n");
			break;
		}
	}
	return 0;
}