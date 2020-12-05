// Bubblesort Version 0.2

#include <stdio.h>

int main() {

	int a, b, c, swap;

	int arr[10] = {5,8,2,9,4,6,1,7,3,0};

	for(a = 0; a < 10; a++) {
		printf("%d ", arr[a]);
	}

	printf("\n");
	
	for (a = 0; a < 10; a++) {
		for (b = 0; b < 9; b++) {
			if(arr[b] > arr[b+1]) {
				swap = arr[b];
				arr[b] = arr[b+1];
				arr[b+1] = swap;
			}
		}
		for(c = 0; c < 10; c++) {
			printf("%d ", arr[c]);
		}
		printf("\n");
	}

	return 0;
}


