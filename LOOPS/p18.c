/* PRINT
	*
   *** 
  *****
 *******
********* 
 *******
  *****
   ***
    *   */
#include <stdio.h>

int main(){
      int rows;
      printf("\n enter no of rows: ");
      scanf("%d",&rows);
      for(int i = 1;i <= rows;i++){
      	for(int j = 1;j <= rows - i;j++) 
      		printf(" ");
      	for(int k = 1;k <= i*2-1;k++)
      		printf("*");
      	printf("\n");
      }
      for(int i  = rows - 1;i >= 1;i--){
     	for(int j = 1;j <= rows-i;j++)
     		  printf(" ");
     	for(int j = 1;j <= i*2-1;j++)
     		printf("*");
     	printf("\n");
     }
}
