#include <stdio.h>

	void reverseArray(char *arr, int length) {
    		int left = 0;
    		int right = length - 1;

    		while (left < right) {
        		char temp = arr[left];
        		arr[left] = arr[right];
        		arr[right] = temp;
        		
			left++;
        		right--;
    		}
	}

	int main() {
    		char arr[] = {'h', 'a', 'y', 'k', 'o'};
    		int length = sizeof(arr) / sizeof(arr[0]);

    		reverseArray(arr, length);

    		for (int i = 0; i < length; i++) {
        		printf("%c ", arr[i]);
    		}

    		return 0;
	}

