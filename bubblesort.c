// Bubblesort Version 0.1

#include <stdio.h>

int main() {

	int a, b, c, swap;

	int arr[10] = {5,8,2,9,4,6,1,7,3,0};

	for(a = 0; a < 10; a++) {
		printf("Number %d: %d\n", a, arr[a]);
	}

	printf("---SEPARATOR---\n");

	
	for (a = 0; a < 10; a++) {
		for (b = 0; b < 9; b++) {
			if(arr[b] > arr[b+1]) {
				swap = arr[b];
				arr[b] = arr[b+1];
				arr[b+1] = swap;
			}
		}
	}

	for(a = 0; a < 10; a++) {
		printf("Number %d: %d\n", a, arr[a]);
	}

	return 0;
}


