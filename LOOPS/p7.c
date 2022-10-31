/*print       *
             ***
            *****
         each row should have odd number of '*' */
#include <stdio.h>
int main(){
	int n;
	printf("\nenter no of rows: ");
	scanf("%d",&n);
	int space = n - 1;
	for(int i = 1;i <= n;i++){
		for(int j = 1; j <= space;j++)	printf(" ");
		for(int k = 1;k <= i*2-1;k++) printf("*");
		printf("\n");
		space --;
	}
}