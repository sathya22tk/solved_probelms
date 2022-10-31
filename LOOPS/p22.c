/* print 
		1
 	   121
      */12321
#include <stdio.h>

int main(){
	int n,temp1,i,j,k,l;
    printf("\nenter the no of rows: ");
    scanf("%d",&n);
    temp1 = n;
    for( i = 1;i <= n;i++){
    	for( j = temp1;j >= 1;j--) printf(" ");

    	for( k = 1,l = 1;k <= i*2-1;k++){
    		if(k <= i){
    		 printf("%d",k);
    		}
    		else{
    			printf("%d",k-(l*2));
    			l++;
    		}
    	}
   	temp1--;
   	printf("\n");
    }
}
