#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int contain(const int*, int, int);

void enterTab(int*, int);
void afficheTab(const int *, int);
void enterTabf(float*, float);
void afficheTabf(const float *, float);

void copiePos(int *, const int *, int);

float moyTab(const int *, int);

int maxTab(const int *, int);
int minTab(const int *, int);
int indexMaxTab(const int *, int);
int rechercheTab(const int *, int, int);
int interval(const float *, float, float, int) ;
void normalize(const int*, float *, float, float, int);

void loto(int *, int);
int nbBons(const int *,const int *, int);

int inser(int *, int, int, int);
int suppr(int *, int, int) ;

int trie(int *, int) ; 

int main(int argc, char const *argv[]) {

	srand(time(NULL));

	// int tab[5];
	// enterTab(tab, 5);
	// afficheTab(tab, 5);

	// int tabf[5];
	// enterTabf(tabf, 5);
	// afficheTabf(tabf, 5);

	// int tabInt[10]={65,21,-9,23,-1,32,5,-69,12,-3};
	// int tabPos[10]={0};

	// copiePos(tabPos, tabInt, 10);
	// afficheTab(tabPos, 10);

	// printf("%f\n", moyTab(tabInt, 10));
	// printf("%d\n", maxTab(tabInt, 10));
	// printf("%d\n", minTab(tabInt, 10));
	// printf("%d\n", indexMaxTab(tabInt, 10));
	// printf("%d\n", rechercheTab(tabInt, 3435, 10));

	// float tabFloat[10]={65,21,-9,23,-1,32,5,-69,12,-3};
	// printf("%d\n", interval(tabFloat, -5, 10, 10));

	// int counter[7] = {0}, total = 0;
	// int tLoto[6];
	// int tempLoto[6];
	// loto(tLoto, 6);
	// afficheTab(tLoto, 6);

	// do{
	// 	total += 1;
	// 	loto(tempLoto, 6);
	// 	counter[nbBons(tempLoto, tLoto, 6)]++;
	// } while(nbBons(tempLoto, tLoto, 6) != 5);

	// afficheTab(counter, 7);

	int tabInt[10]={65,21,-9,23,-1,32,5,-69,12,-3};
	inser(tabInt, 3, 0, 10);
	afficheTab(tabInt, 10);

	suppr(tabInt, 2, 10);
	afficheTab(tabInt, 10);

	int jsp[5] = {5, 4, 2, 9, 1};
	printf("%d\n", trie(jsp, 5));
	afficheTab(jsp, 5);

	return 0;
}

void enterTab(int *t, int n) {
	for(int i = 0 ; i < n ; i++) {
		printf("Entrer une valeur: ");
		scanf("%d", t + i);
	}
}

void afficheTab(const int *t, int len) {
	printf("{");
	for (int i = 0; i < len; ++i){
		printf((i + 1 == len ? "%d" : "%d, "), *(t + i));
	}
	printf("}\n");
}

void enterTabf(float *t, float n) {
	for(int i = 0 ; i < n ; i++) {
		printf("Entrer une valeur: ");
		scanf("%f", t + i);
	}
}

void afficheTabf(const float *t, float len) {
	printf("{");
	for (int i = 0; i < len; ++i){
		printf((i + 1 == len ? "%f" : "%f, "), *(t + i));
	}
	printf("}\n");
}

void copiePos(int * dest, const int * src, int n) {
	int index = 0;
	for(int i = 0 ; i < n ; ++i) {
		if(src[i] > 0) {
			dest[index] = src[i];
			index++;
		}
	}
}

float moyTab(const int *t, int n) {
	float sum = 0;
	for (int i = 0; i < n; ++i) {
		sum += *(t + i);
	}
	return sum / n;
}

int maxTab(const int * t, int n) {
	int max = t[0];
	for (int i = 0; i < n; ++i) {
		if(t[i] > max) max = t[i];
	}
	return max;
}

int minTab(const int * t, int n) {
	int min = t[0];
	for (int i = 0; i < n; ++i) {
		if(t[i] < min) min = t[i];
	}
	return min;
}

int indexMaxTab(const int * t, int n) {
	int max = t[0];
	int maxIndex = 0;
	for (int i = 0; i < n; ++i) {
		if(t[i] > max) {
			max = t[i];
			maxIndex = i;
		}
	}
	return maxIndex;
}

int rechercheTab(const int * t, int x, int n) {
	int index = -1;
	for (int i = 0; i < n; ++i){
		if(t[i] == x) 
			return i;
	}
	return index;
}

int interval(const float *t, float min, float max, int n) {
	int count = 0;
	for (int i = 0; i < n; ++i) {
		if(min < t[i] && t[i] < max) {
			count++;
		}
	}
	return count;
}

void normalize(const int *t, float *tNorm, float min, float max, int n) {
	int t_max = maxTab(t, n), t_min = minTab(t, n);
	for (int i = 0; i < n; ++i) {
		tNorm[i] = (i - t_min) * (max - min) / (t_max - t_min) + min;
	}
}

int contain(const int *t, int value, int n) {
	for (int i = 0; i < n; ++i){
		if(t[i] == value)
			return 1;
	}
	return 0;
}

void loto(int *t, int n) {
	int *usedTab = malloc(n * sizeof(int));
	int r_nb;

	for (int i = 0; i < n; ++i){
		do{
			r_nb = 1 + rand() % 49;
		}while(contain(usedTab, r_nb, n));
		t[i] = r_nb;
	}
}

int nbBons(const int * t1, const int * t2, int len) {
	int count = 0;
	for (int i = 0; i < len; ++i){
		for (int j = 0; i < len; ++i){
			if(t1[i] == t2[j]) {
				count++;
				break;
			}
		}
	}
	return count;
}

int inser(int *t, int index, int val, int n) {
	int next, temp;
	for (int i = 0; i < n; ++i){
		if(i == index + 1){
			next = t[i];
			t[i] = val;
		}
		else if(i > index + 1) {
			temp = t[i];
			t[i] = next;
			next = temp;
		}
	}
	return 0;
}

int suppr(int *t, int index, int n) {
	int previous = t[n - 1], temp;
	for(int i = n - 2 ; i >= 0 ; i--) {
		if(i >= index) {
			temp = t[i];
			t[i] = previous;
			previous = temp;
		}
	}
	return 0;
}

int trie(int * tab, int n) {
	int i, j, tmp, permut = 0;
 
  	for (i=0 ; i < n-1; i++) {
   		for (j=0 ; j < n-i-1; j++) {
	      if (tab[j] > tab[j+1]) {
	        tmp = tab[j];
	        tab[j] = tab[j+1];
	        tab[j+1] = tmp;
	        permut++;
	      }
    	}
  	}
  	return permut;
}


