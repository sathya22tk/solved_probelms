/* PRINT PATTERNS:
                 *
               * * *
             * * * * *
         INPUT : get number of rows from the user
         TC    : O(n^2)*/
#include <stdio.h>
int main(){
    
  int n,k;
   printf("\n enter number of rows: ");
   scanf("%d",&n);
   for(int i = 1;i <= n;i++){
        for(int j = 1;j <= 2*n-1 ;j++){
            if(j >= n - (i-1) && j <= n + (i-1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}