/*Write a program in C to find the 
  prime numbers within a range of numbers. */
#include <stdio.h>
int find_prime(int num){
	int count = 0;
	if(num == 1) return 0;
	for(int i = 2;i <= num/2;i++){
		if(num%i == 0){ 
			count++;
			break;
		}
	}

	if(count == 0) return num;
	else return 0;
}
int main(){
	int start,end;
	printf("\nenter the range: ");
	scanf("%d%d",&start,&end);
	for(int i = start;i <= end;i++){
		if(find_prime(i))
			printf("%d ",i);
	}
	
}