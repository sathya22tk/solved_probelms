/* print
         1 
         01
         101 
         0101 
         10101*/
#include <stdio.h>
int main(){
	int n;
	printf("\nenter the no of rows: ");
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		if(i & 1) {
			for(int j = 1;j <= i;j++){
				if(j & 1) printf("1");
				else printf("0");
			}
			printf("\n");
		}
		else{
			for(int j = 1;j <= i;j++){
				if(j & 1) printf("0");
				else printf("1");
			}
			printf("\n");
		}	

	}
}
