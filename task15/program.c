#include <stdio.h>

	int power(int num, int exp);

	int main() {
		int num = 0;
		int exp = 0;

		printf("Write num: ");
		scanf("%d", &num);

		printf("Write exp-power for num: ");
		scanf("%d", &exp);

		int result = power(num, exp);

		printf("Result is --> %d", result);

		return 0;
	}

	int power(int num, int exp) {
		int tmp = num;

		for(int i = 1; i < exp; i++) {
			num *= tmp;
		}

		return num;
	}	
