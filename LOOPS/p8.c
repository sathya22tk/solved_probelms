/* print this series and their sum 
     9 + 99 + 999 + 9999 ... */
#include <stdio.h>
int main()
{
	int digit = 10,n,sum = 0,x;
	printf("\nenter the no of terms: ");
	scanf("%d",&n);
	for(int i = 1; i <= n;i++){
		sum += (digit - 1);
		printf("%d ",digit - 1);
		digit *= 10;
	}
	printf("sum = %d",sum);
}
