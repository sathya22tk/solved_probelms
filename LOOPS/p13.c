/*Write a program in C to find the
 sum of the series 1 +11 + 111 + 1111 + .. n terms.*/
#include <stdio.h>
int main(){
	int n,sum = 0,temp = 1;
	printf("\nenter the no of terms: ");
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		printf(" %d + ",temp);
		sum += temp;
		temp = (temp*10)+1;
	}
	printf("\nsum = %d",sum);
}
