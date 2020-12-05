// JFS Bubblesort 

#include <stdio.h>
#include <unistd.h>
#define TOTAL 20

int main() {

	// turns off cursor blinking...following line works in Amazon Linux 2 EC2 Machine
	printf ("\033[?12l");

	int a, b, c, temp, swap;

	const char* VERSION = "0.4";

	swap = 0; // has a swap occured in an instance? we'll use this to exit faster.

	int arr[TOTAL] = {1, 18, 13, 5, 12, 6, 17, 2, 8, 16, 3, 19, 4, 20, 7, 9, 10, 14, 11, 15};

	printf("\n\n          [JFS BUBBLESORT VERSION %s]\n\n", VERSION);

	for (a = 0; a < TOTAL; a++) {
		swap = 0;
		for (b = 0; b < TOTAL-1; b++) {
			printf("          Iteration#: %02d  [%02d > %02d] ", a, arr[b], arr[b+1]);
			if(arr[b] > arr[b+1]) {
				temp = arr[b];
				arr[b] = arr[b+1];
				arr[b+1] = temp;
				swap = 1; // a swap has occured.
			}
			for(c = 0; c < TOTAL; c++) {
				printf("%02d ", arr[c]);
			}
			printf("\r");
			fflush(stdout);
			sleep(1);			
		}
		// if no swap has happened, you can exit
		if (!swap) { 
			printf("\n\n          No swap happened! Exiting early. Ended on iteration # %02d instead of %02d!\n\n\n", a, TOTAL);
			return 0;
		}
	}

	return 0;
}


