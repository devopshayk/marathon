#include <stdio.h>

	int main() {
		const int size = 5;

		int arr1[size];
		int arr2[size];

		printf("Write nums for arr1: ");
		for(int i = 0; i < size; i++) {
			scanf("%d", &arr1[i]);
		}

		printf("Write nums for arr2: ");
                for(int i = 0; i < size; i++) {
                        scanf("%d", &arr2[i]);
                }

		printf("Result is --> ");
		for(int i = 0; i < 2 * size; i++) {
			if(i < size) printf("%d ", arr1[i]);
			else printf("%d ", arr2[i - size]);
		}

	}
