/*Write a C program to determine
 whether a given number is prime or not.*/
#include <stdio.h>

int main(){
	int num,count = 0;
	printf("\nenter the number: ");
	scanf("%d",&num);
	if(num == 1) return printf("\n 1 is neither prime nor composite:");
	for(int i = 2;i <= num/2;i++){
		if(num%i == 0){ 
			count++;
			break;
		}
	}

	if(count == 0) printf("\n %d is prime",num);
		else printf("\n %d is not prime",num);
}
