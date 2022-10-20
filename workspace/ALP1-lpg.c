#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	int input[3], min, max, value;
	
	for(int i = 0 ; i < 3 ; i++) {
		scanf("%d", input + i);
	}

	min = input[0];
	max = input[0];
	for(int i = 0 ; i < 3 ; i++) {
		value = *(input + i);
		if(value < min) {
			min = value;
		}

		if(value > max) {
			max = value;
		}
	}
	printf("min=%d, max=%d\n", min, max);

	return 0;
}