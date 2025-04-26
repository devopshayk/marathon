#include <stdio.h>

	int main() {
		const int size = 5;
		int arr[size];

		int sum = 0;
		int result = 0;
		
		printf("Write nums for arr: ");
		for(int i = 0; i < size; i++) {
			scanf("%d", &arr[i]);
		}

		for(int i = 0; i < size; i++) {
			sum += arr[i];
		}

		result = sum / size;
		printf("Result is --> %d", result);

		return 0;
	}
