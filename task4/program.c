#include <stdio.h>

	int main(){
    		const int size = 5;
    		char str[size];
    		
		printf("Write syms for check: ");
		scanf("%s", str);

		printf("Result is --> ");
    		for(int i = 0; str[i] != '\0'; ++i){
        		if(str[i] >= '0' && str[i] <= '9'){
            			printf("%c",str[i]);
    		    	}
    		}
    		
		return 0;
	}
