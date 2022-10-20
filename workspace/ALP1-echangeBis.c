#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	int in_a, in_b;
	scanf("%d %d", &in_a, &in_b);

	in_b = in_b + in_a;
	in_a = in_b - in_a;
	in_b -= in_a;

	printf("a= %d, b= %d\n", in_a, in_b);
	return 0;
}