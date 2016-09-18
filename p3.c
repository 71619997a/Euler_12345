#include <stdio.h>
#include <stdlib.h>

int main() {
	long long num = 600851475143;  // just in case
	int div = 1;
	while(num > 1) {
		div++;
		if(isPrime(div)) {
			while(num % div == 0) {
				num /= div;
			}
		}
	}
	printf("%d", div);
}

int isPrime(int num) {
	int i = 2;
	int sqrtnum = (int)sqrt(num);
	for(;i <= sqrtnum; i++) {
		if(num % i == 0) return 0;
	}
	return 1;
}