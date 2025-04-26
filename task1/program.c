#include <stdio.h>

	int main() {
		const int size = 5;
		
		int arr1[size];
		int arr2[size];

		int result = 1;

		printf("Write nums for arr1: ");
		for(int i = 0; i < size; i++) {
			scanf("%d", &arr1[i]);
		}

		printf("Write nums for arr2: ");
                for(int i = 0; i < size; i++) {
                        scanf("%d", &arr2[i]);
                }

		printf("Result is --> ");
		for(int i = 0; i < size; i++) {
			printf(" %d ", arr1[i] * arr2[i]);
		}

		return 0;

	}
