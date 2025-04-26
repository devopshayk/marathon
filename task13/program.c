#include <stdio.h>

	int factorial(int n);

	int main() {
		int n = 0;

		printf("Write num for sum factorial: ");
		scanf("%d", &n);

		int result = factorial(n);
		printf("Factorial for %d = %d", n, result);

		return 0;
	}

	int factorial(int n) {
		int mul_sum = 1;

		for(int i = n; i >= 1; i--) {
			mul_sum *= i;
		}

		return mul_sum;
	}
