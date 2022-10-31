/*Write a program in C to find the number and sum of all integer
 between 100 and 200 which are divisible by 9*/
#include <stdio.h>

int main(){
	int start,end,sum;
	printf("\nenter the range: ");
	scanf("%d%d",&start,&end);
	for(int i = start;i <= end;i++){
		if(i % 9 == 0){
			sum += i;
			printf("%d ",i);
		}
	}      
	printf("\n sum = %d",sum);
}
