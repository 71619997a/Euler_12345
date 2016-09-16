#include <stdio.h>
#include <stdlib.h>

int main() {
	int t1 = 1;
	int t2 = 2;
	int sum = 0;
	while (t2 < 4000000) {
		if(t2 % 2 == 0) {
			sum += t2;
		}
		int temp = t2;
		t2 += t1;
		t1 = temp;
	}
	printf("%d", sum);
}