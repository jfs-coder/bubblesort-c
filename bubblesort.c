// Bubblesort Version 0.4

#include <stdio.h>
#include <unistd.h>

int main() {

	// SEE IF YOU CAN STOP THE SEARCHING WHEN NO SWAP HAS OCCURED IN ONE ITERATION (RETURN 0?)

	// turns off cursor blinking...
	printf ("\033[?12l");

	int a, b, c, swap;

	int tot = 10;

	int arr[10] = {5,8,2,9,7,3,0,4,1,6};

	for (a = 0; a < tot; a++) {
		for (b = 0; b < tot-1; b++) {
			printf("_  [%d > %d] ", arr[b], arr[b+1]);
			if(arr[b] > arr[b+1]) {
				swap = arr[b];
				arr[b] = arr[b+1];
				arr[b+1] = swap;
			}
			for(c = 0; c < tot; c++) {
				printf("%d ", arr[c]);
			}
			printf("\r");
			fflush(stdout);
			sleep(1);			
		}
		// mySleep(1);
	}
	
	return 0;
}


