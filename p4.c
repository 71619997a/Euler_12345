#include <stdio.h>
#include <stdlib.h>

int main() {
	int a;
	int b;
	int maxPal = 0;
	for(a = 999; a > 99; a--) {
		for(b = 999; b > 99; b--) {
			char sProduct[6];
			if(a * b > maxPal) {
				sprintf(sProduct, "%d", a * b);
				if(isPalindrome(sProduct)) {
					maxPal = a * b;
				}
			}
		}
	}
	printf("%d", maxPal);
}

int isPalindrome(char* snum) {
	int lastIndex = 5;
	int i = 0;
	for(;i < 3; i++) {
		if(snum[i] != snum[lastIndex - i]) return 0;
	}
	return 1;
}