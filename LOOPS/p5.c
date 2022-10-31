/* print 
			1
		   2 2
		  3 3 3
		 4 4 4 4*/
#include <stdio.h>
int main(){
		int n,k;
		printf("\nenter number of rows: ");
		scanf("%d",&n);
		int space = n - 1;
		for(int i = 1;i <= n;i++){
			for(int j = 1; j <= space;j++,k = 0) printf("  ");
			for(k = 1; k <= i;k++) printf("%2d  ",i);
			space --;
			printf("\n");

		}        
}    
 
