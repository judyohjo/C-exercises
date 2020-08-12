#include <stdio.h>

int main() {
	float first, second;
	printf("Input the first integer: ");
	scanf("%d", &first);
	printf("Input the second integer: ");
	scanf("%d", &second);
	if (first>second) {
		printf("Result = %f", first/second);
	} else {
		printf("Result = %f", second/first);
	}

}





