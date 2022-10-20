#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	int input;
	scanf("%d", &input);

	if(input <= 10) {
		printf("petit\n");
	}
	else if(input < 20) {
		printf("moyen\n");
	}
	else if(input < 40) {
		printf("grand\n");
	}
	else {
		printf("très grand\n");
	}

	return 0;
}