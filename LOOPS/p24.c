//check  the number is palindrome or not
#include <stdio.h>

int f(int n,int sum){
	 int r; 
	if(n == 0) return sum;
	r = n % 10;
	sum = (sum*10) + r;
	n /= 10;
	return f(n,sum); 
}

int main(){
	int n,r,i,sum = 0;
	printf("\nenter the number: ");
	scanf("%d",&n);
	r = f(n,0);
	printf("\n%s",(n == r) ? "palindrome" : "not palindrome");
}
