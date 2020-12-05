// Bubblesort Version 0.4

#include <stdio.h>
#include <unistd.h>
#define clrscrn() printf("\e[1;1H\e[2J");

void mySleep(int secs) {
	printf("Sleep being called\n");
	sleep(secs);
}

int main() {

	int a, b, c, swap;

	int tot = 5;

	int arr[5] = {5,8,2,9,7};

	for(a = 0; a < tot; a++) {
		printf("%d ", arr[a]);
	}

	printf("\n");

	mySleep(1);
	
	for (a = 0; a < tot; a++) {
		for (b = 0; b < tot-1; b++) {
			if(arr[b] > arr[b+1]) {
				swap = arr[b];
				arr[b] = arr[b+1];
				arr[b+1] = swap;
			}
			for(c = 0; c < tot; c++) {
				printf("%d ", arr[c]);
			}
			// printf("\r");
			mySleep(1);			
		}
		// mySleep(1);
	}
	
	return 0;
}


