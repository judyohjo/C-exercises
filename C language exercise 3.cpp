#include <stdio.h>

int main() {
	int first, second;
	printf("Input the first integer: ");
	scanf("%d", &first);
	printf("Input the second integer: ");
	scanf("%d", &second);
	if (first > second) {
		printf("Result = %d", first-second);
	} else {
		printf("Result = %d", second-first);
	}
}




