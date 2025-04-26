#include <stdio.h>

	void mul_table(int n);
	
	int main() {
		int n = 0;

		printf("Write num for table: ");
		scanf("%d", &n);

		mul_table(n);

		return 0;
	}
	
	void mul_table(int n) {
        	int result = 1;

        	for(int i = 1; i <= 10; i++) {
                	result = i * n;
                	printf("%d * %d = %d\n", n, i, result);
        	}

    	}

