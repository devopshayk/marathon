#include <stdio.h>

	int main() {
		const int size = 5;
		int arr[size];

		int target = 0;
		
		printf("Write nums for arr: ");
		for(int i = 0; i < size; i++) {
			scanf("%d", &arr[i]);
		}

		printf("Write num for target: ");
		scanf("%d", &target);

		for(int i = 0; i < size; i++) {
			if(arr[i] == target) {
				printf("Yes, it's a num --> %d", arr[i]);
				return 0;
			}
		}

		printf("No");
	}
