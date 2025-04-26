#include <stdio.h>

	int fibonacci(int n);

	int main() {
    		int n = 0;

    		printf("Write num: ");
    		scanf("%d", &n);

    		printf("The %d-th Fibonacci number is %d\n", n, fibonacci(n));

    		return 0;
	}

	int fibonacci(int n) {
 		if (n <= 0) return 0;
    		else if (n == 1) return 1;

    		int a = 0, b = 1, temp;

    		for (int i = 2; i <= n; i++) {
        		temp = a + b;
        		a = b;
        		b = temp;
    		}

    		return b;
	}
