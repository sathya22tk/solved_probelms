//reverse the number
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

	/*for(i = 0;n != 0; n /= 10){
		r = n % 10;
		sum = (sum*10) + r;
	}*/      
	printf("\n%d",f(n,0));
}
