// Bubblesort Version 0.4

#include <stdio.h>
#include <unistd.h>

int main() {

	// turns off cursor blinking...following line works in Amazon Linux 2 EC2 Machine
	printf ("\033[?12l");

	int a, b, c, temp, swap;

	swap = 0; // has a swap occured in an instance? we'll use this to exit faster.

	int tot = 20;

	// int arr[10] = {5,8,2,9,7,3,0,4,1,6};
	int arr[20] = {1, 18, 13, 5, 12, 6, 17, 2, 8, 16, 3, 19, 4, 20, 7, 9, 10, 14, 11, 15};

	for (a = 0; a < tot; a++) {
		swap = 0;
		for (b = 0; b < tot-1; b++) {
			printf("_         Iteration#: %02d  [%02d > %02d] ", a, arr[b], arr[b+1]);
			if(arr[b] > arr[b+1]) {
				temp = arr[b];
				arr[b] = arr[b+1];
				arr[b+1] = temp;
				swap = 1; // a swap has occured.
			}
			for(c = 0; c < tot; c++) {
				printf("%02d ", arr[c]);
			}
			printf("\r");
			fflush(stdout);
			sleep(1);			
		}
		// if no swap has happened, you can exit
		if (!swap) { 
			printf("\nNo swap happened! Exiting early. Ended on iteration # %d instead of %d!\n", a, tot);
			return 0;
		}
	}

	return 0;
}


