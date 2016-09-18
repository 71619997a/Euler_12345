#include <stdio.h>
#include <stdlib.h>
char primes20[8] = {2, 3, 5, 7, 11, 13, 17, 19};

void addFactors(int, char*, char*);
int max(int, int);

int main() {
	char pFactors[8];
	int i;
	for(i = 20; i > 1; i--) {
		addFactors(i, pFactors, primes20);
	}
	long long n = 1;
	for(i = 0; i < 8; i++) {
		printf("%d, ", pFactors[i]);
		int j;
		for(j = 0; j < pFactors[i]; j++) {
			n *= primes20[i];
			// printf("\n%d", n);
		}
	}
	printf("a");
	printf("%ld", n);
}

void addFactors(int num, char* pFactors, char* primes) {
	printf("\n%d:\t", num);
	char myFactors[8] = {0,0,0,0,0,0,0,0};
	int i = 0;
	while(num > 1 && i < 8) {
		int p = primes[i];
		while(num % p == 0 && num > 1) {
			num /= p;
			myFactors[i]++;
			printf("%d, ", num);
		}
		i++;
	}
	for(i = 0; i < 8; i++) {
		printf("%d", myFactors[i]);
		pFactors[i] = max(pFactors[i], myFactors[i]);
	}
}

int max(int a, int b) {
	if(a > b) {
		return a;
	}
	return b;
}