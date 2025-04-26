#include <stdio.h>

	int main() {
        	int n = 1;
        	int result = 1;

        	for(int i = 0; i < 10; i++) {
            		for(int j = 1; j <= 10; j++) {
                		result = j * n;
                		printf("%d * %d = %d\n", n, j, result);
            		}
            		n++;
           	 	printf("\n");
        	}

        	return 0;
    	}
