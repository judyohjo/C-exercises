#include <stdio.h>

int main() {
	int height, width;
	printf("Input height: ");
	scanf("%d", &height);
	printf("Input width: ");
	scanf("%d", &width);
	
	printf("Perimeter of the rectangle = %d inches\n", ((height * 2) + (width * 2)));
	printf("Area of the rectangle = %d square inches", height * width);
}




