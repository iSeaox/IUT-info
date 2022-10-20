#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define vow "aeyuio"

int contain(char *s, char c);

int isAlpha(char);
int isAVow(char);
int isACons(char);
int isADigit(char);
int toLower(char);
int toUpper(char);
char letAleat(void);

int stringUpper(char*);
int voyelles(const char*);
int lettres(const char*);
void zero(char *, int);
int compt(const char*, char);
int replace(char *, char, char);
int truncate(char *, int);
int copyNoChar(const char *, char *, char);

int main(void){
	srand(time(NULL));
	
	printf("%d, %d\n", isAlpha('A'), isAlpha('b'));
	printf("%d, %d\n", isAVow('A'), isAVow('b'));
	printf("%d, %d\n", isACons('A'), isACons('b'));
	printf("%d, %d\n", isADigit('1'), isADigit('b'));
	printf("%d, %c, %c\n", toLower('1'), toLower('B'), toLower('b'));
	printf("%d, %c, %c\n", toUpper('1'), toUpper('B'), toUpper('b'));
	printf("rand char : \n\t");
	for(int i = 0 ; i < 50 ; i++)
		printf("%c  ", letAleat());
	printf("\n");
	
	char test[] = "C'est Tipar";
	printf("%d\n", stringUpper(test));
	printf("%s \n", test);
	
	char *testVow = "Test de voyelles";
	printf("%s -> %d voyelle(s)\n", testVow, voyelles(testVow));
	
	char *testLett = "J'ai compris";
	printf("%s -> %d lettres(s)\n", testLett, lettres(testLett));
	
	char *testCompt = "J'ai compris";
	printf("%s -> %d appartition(s) de %c\n", testCompt, compt(testCompt, 'i'), 'i');
	
	char testReplace[] = "Ok testons ce programme";
	printf("%d\n", replace(testReplace, 'e', 'Z'));
	printf("%s\n", testReplace);
	
	printf("%d\n", truncate(testReplace, 3));
	printf("%s\n", testReplace);
	
	return 0;
}

int contain(char *s, char c) {
	int i = 0;
	while(s[i] != '\0') {
		if(s[i] == c)
			return 1;
		i++;
	}
	return 0;
}

int isAlpha(char c) {
		if(c >= 'A' && c <= 'Z') {
			return 1;
		}
	return 0;
}

int isAVow(char c) {
	int i = 0; 
	if(isAlpha(c)) {
		c += 32;
	}
	while(vow[i] != '\0') {
		if(vow[i] == c)
			return 1;
		i++;
	}
	return 0;
}

int isACons(char c) {
	return !isAVow(c);
}

int isADigit(char c){
	return (c >= 0x30 && c <= 0x39);
}

int toLower(char c) {
	if(c >= 0x41 && c <= 0x5A) {
		return c + 32;
	}
	else if(c >= 0x61 && c <= 0x7A) {
		return c;
	}
	else {
		return -1;
	}
}

int toUpper(char c) {
	if(c >= 0x41 && c <= 0x5A) {
		return c;
	}
	else if(c >= 0x61 && c <= 0x7A) {
		return c - 32;
	}
	return -1;
}

char letAleat(void) {
	return 0x61 + rand() % 26;
}

int stringUpper(char* str) {
	int i = 0, modif = 0;
	char temp;
	
	while(str[i] != '\0') {
		temp = toUpper(str[i]);
		if(!(temp == str[i] || temp == -1)) {
			str[i] = temp;
			modif++;
		}
		i++;
	}
	return modif;
}
int voyelles(const char *s) {
	int count = 0;
	int i = 0;
	while(s[i] != '\0') {
		if(contain(vow, s[i]))
			count++;
		i++;
	}
	return count;
}

int lettres(const char *s) {
	int count = 0, i = 0;
	while(s[i] != '\0') {
		if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
			count++;
		i++;
	}
	return count;
}

void zero(char *t, int n) {
	for(int i = 0 ; i < n ; i++) {
		t[i] = '\0';
	}
}

int compt(const char *s, char orig) {
	int count = 0, i = 0;
	while(s[i] != '\0') {
		if(s[i] == orig)
			count++;
		i++;
	}
	return count;
}

int replace(char *s, char src, char dst) {
	int i = 0, count = 0;
	while(s[i] != '\0') {
		if(s[i] == src) {
			s[i] = dst;
			count++;
		}
		i++;
	}
	return count;
}

int truncate(char *s, int n) {
	int i = strlen(s) - n;
	while(s[i] != '\0') {
		s[i] = '\0';
		i++;
	}
	return i;
}

int copyNoChar(const char *src, char *dst, char c) {
	int i = 0, count = 0;
}



