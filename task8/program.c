#include <stdio.h>


	int main() {
		const int size1 = 3;
    		int arr1[size1];

		const int size2 = 4;
    		int arr2[size2];

    		printf("Write nums for arr1 : ");
    		for (int i = 0; i < size1; i++) {
        		scanf("%d", arr1 + i);
    		}

    		printf("Write nums for arr2 : ");
    		for (int i = 0; i < size2; i++) {
        		scanf("%d", arr2 + i);
    		}

    		for (int i = 0; i < size1 + size2; i++) {
        		if (i < size1) {
            			printf("%d ", arr1[size1 - i - 1]);
        		} else {
            			printf("%d ", arr2[size1 + size2 - i - 1]);
        		}
    		}

    		return 0;
	}

