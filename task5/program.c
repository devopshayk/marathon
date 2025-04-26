#include <stdio.h>

	int main() {
		const int size = 5;
		char arr[size];

		int result = 0;

		printf("Write syms to cover uppercase: ");
		for(int i = 0; i < size; i++) {
			scanf(" %c", &arr[i]);
		}

		for(int i = 0; i < size; i++) {
			result = arr[i] ^ 32;
			printf("%c ", result);
		}
		
		return 0;
	}
