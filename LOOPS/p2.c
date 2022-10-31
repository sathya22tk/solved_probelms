/*PRINT PATTERNS
                *
               * *
              * * *
         INPUT : get number of rows from the user
         TC    : O(n^2)*/
#include<stdio.h>

int main(){
	int rows,space;
	printf("\nenter the number of rows: ");
	scanf("%d",&rows);
	space = rows;
	for(int i = 1; i <= rows;i++){
		for(int k = space; k >=1;k--) printf(" ");
		for(int j = 1;j <= i;j++)	printf(" *");
		space--;
		printf("\n");
	}
}