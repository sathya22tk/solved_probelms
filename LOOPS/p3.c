// find the factorial of number
#include <stdio.h>
int f(int n){
	if(n <= 0)return 0;
	if(n == 1) return 1;
	return n*f(n-1);
}
int main(){
		int n;
		printf("\n enter positive integer: ");
		scanf("%d",&n);
		printf("factorial of %d is %d",n,f(n));

}    
 
