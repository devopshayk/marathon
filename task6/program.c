#include <stdio.h>

	int main() {
		const int size = 5;
		
		int arr1[size];
		int arr2[size];
		
		int count = 0;

		printf("Write nums for arr1: ");
		for(int i = 0; i < size; i++) {
			scanf("%d", &arr1[i]);
		}
	
		printf("Write nums for arr2: ");
		for(int i = 0; i < size; i++) {
			scanf("%d", &arr2[i]);
		}

		for(int i = 0; i < size; i++) {
			if(arr1[i] == arr2[i]) {
				count++;
			}
		}

		if(count == size) printf("Yes, arrays is identical\n"); 
		else printf("No, arrays is not identical\n");

		return 0;

	}
