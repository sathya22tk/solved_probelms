/*Write a program in C to display the n terms of square natural number 
  and their sum*/
#include <stdio.h>
int f(int i){
	int mul = 1;
	for(int j = 1;j <= 2;j++) mul *= i;
	return mul;
}
int main(){
	int n,temp,sum = 0;
	printf("\nenter the number of terms: ");
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		temp = f(i);
		sum += temp;
		printf("%d ",temp);
	}
	printf("\nsum = %d",sum);
}
