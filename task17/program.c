#include <stdio.h>

	int revers(int n){
    		int a = 0;
   
	       	while(n){
        		a = a * 10 + n % 10;
        		n = n / 10;
    		}
    		
		return a;
	}


	int isPalimdrom(int n){
    		if(n == revers(n)) return 1;
		else return 0;
    		
	}


	int function(int count, int n){
    		
		while(!isPalimdrom(n)){
        		n += revers(n);
        		count++;
    		}
		
    		return count;
	}


	int main(){
		int count = 0;
    		int n = 0;

		printf("Write num: ");
		scanf("%d", &n);
    		
		int res = function(count,n);
    		printf("Result is --> %d",res);
    		
		return 0;
	}

