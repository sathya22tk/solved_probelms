/*Write a C program to check whether a given
 number is an armstrong number or not.*/
#include <stdio.h>
int find_length(int n){
	if(n /10 == 0) return 1;
	return 1 + find_length(n/10);
}
int find_power(int n,int length){
	int mul = 1;
	for(int i = 1;i <= length;i++)	mul *= n;
	return  mul;
	
}
int find_amstnum(int n,int length){
	int sum = 0,remainder;
	for(int i = 1;i <= length;i++){
		remainder = n % 10;
		sum += find_power(remainder,length);
		n /= 10;
	}

	return sum;
}
int main(){
	int n,sum,length;
	printf("\n enter the number & start & end points: ");
	scanf("%d",&n);
	length = find_length(n);
	
	sum = find_amstnum(n,length);
	if(sum == n) printf("\n%d == %d it is armstrng",n,sum);
	else printf("\n%d != %d it is not armstrog",n,sum);

}
