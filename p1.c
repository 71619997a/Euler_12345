#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("sdjiop");
	int i;
	int sum = 0;
	for(i = 1; i < 1000; i++) {
		if(i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
	}
	printf("s%d", sum);
	return 0;
}