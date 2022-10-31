/*Write a C program to find the
 Armstrong number for a given range of number.*/
#include <stdio.h>
int find_length(int n){
	if(n /10 == 0) return 1;
	return 1 + find_length(n/10);
}
int find_power(int n,int length){
	if(length == 1) return 0;
	int mul = 1;
	for(int i = 0;i < length;i++)	mul *= n;
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
	int sum,length,start,end;
	printf("\n enter the number & start & end points: ");
	scanf("%d%d",&start,&end);
	for(int k = start;k <= end;k++){
		length = find_length(k);
		sum = find_amstnum(k,length);
		if(sum == k) printf("\n%d == %d it is armstrng",k,sum);
	}
}
