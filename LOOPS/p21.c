/*Write a program in C to display the
 first n terms of Fibonacci series. */
#include <stdio.h>
int fib(int n){
	if(n <= 1) return n;
	return fib(n-1) + fib(n-2);
}
int main(){
	int n;
	printf("\nenter the range: ");
	scanf("%d",&n);
	printf("\n0 ");
	for(int i = 1;i < n;i++)
		printf("%d ",fib(i));
}
