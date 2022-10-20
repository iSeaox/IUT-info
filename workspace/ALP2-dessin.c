#include <stdio.h>
#include <stdlib.h>

void rectangle10C(int lines);
void rectangle(int lines, int columns);
void demiSapin(int lines);
void sapin(int lines);

int main(int argc, char const *argv[]) {
	rectangle10C(4);
	printf("\n");
	rectangle(4, 10);
	printf("\n");
	demiSapin(10);
	printf("\n");
	sapin(10);
	return 0;
}


void rectangle10C(int lines) {
	rectangle(lines, 10);
}

void rectangle(int lines, int columns) {
	char line[columns + 1];

	int i = 0;
	for(; i < lines ; i++) {
		line[i] = '*';
	}
	line[i] = '\0';

	for(int i = 0 ; i < columns ; i++) {
		printf("%s\n", line);
	}
}

void demiSapin(int lines) {
	for(int i = 0 ; i < lines ; i++) {
		char line[1 + lines * 2];
		int j = 0;
		for(; j < (1 + lines * 2); j++) {
			line[j] = ' ';
		}
		line[j] = '\0';

		for(int k = 0 ; k < (1 + i * 2) ; k++) {
			line[k] = '*';
		}
		printf("%s\n", line);
	}
}

void sapin(int lines) {
	for(int i = 0 ; i < lines ; i++) {
		char line[1 + lines * 2];
		int j = 0;
		for(; j < (1 + lines * 2); j++) {
			line[j] = ' ';
		}
		line[j] = '\0';

		for(int k = 0 ; k < (1 + i * 2) ; k++) {
			line[(lines - 1 - i) + k] = '*';
		}
		printf("%s\n", line);
	}
}