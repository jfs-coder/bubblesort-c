// Bubblesort Version 0.2

#include <stdio.h>

int main() {

	int a, b, c, swap;

	int tot = 5;

	int arr[5] = {5,8,2,9,7};

	for(a = 0; a < tot; a++) {
		printf("%d ", arr[a]);
	}

	printf("\n");
	
	for (a = 0; a < tot; a++) {
		for (b = 0; b < tot-1; b++) {
			printf("Is %d larger than %d?\n", arr[b], arr[b+1]);
			if(arr[b] > arr[b+1]) {
				printf("Yes, swaping %d -> %d\n", arr[b], arr[b+1]);
				swap = arr[b];
				arr[b] = arr[b+1];
				arr[b+1] = swap;
			}
			for(c = 0; c < tot; c++) {
				printf("%d ", arr[c]);
			}
			printf("\n");
		}
	}

	return 0;
}


