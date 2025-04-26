#include <stdio.h>

	int sum_of_digits(int n) {
    		int sum = 0;
    
    		while (n > 0) {
        		sum += n % 10;
        		n /= 10;
    		}

    		return sum;
	}

	int main() {
    		int num = 0;

    		printf("Write a num: ");
    		scanf("%d", &num);
    
    		printf("Num's digits sum՝ %d", sum_of_digits(num));
    
    		return 0;
	}

