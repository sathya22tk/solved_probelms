/* Write a c program to check whether
  given number is a perfect number or not.
  note: perfect no is a +ve int where its divisors(except a number itself)
        is equal to the the number ex: 6 = 1 + 2+ 3(divisiors).so 6 is perfect number*/
#include <stdio.h>
int main(){
	int sum = 0,n;
	printf("\nenter the number: ");
	scanf("%d",&n);
	for(int i = 1; i < n;i++)
		if(n % i == 0) sum += i;
	if(n == sum)
   		printf("\n%d = %d so it is perfect number",n,sum);
	else
		printf("\n%d = %d so it is not perfect number",n,sum);
}
