/*print the terms and sum of this series 
   x - x^3 + x^5 - ......*/
#include <stdio.h>
int f1(int x,int i){
	if(i == 1) return x;
	int mul = 1;
	for(int j = 1;j <= i;j++)  mul *= x;
	return mul;
}
int main(){
	int n,x,sum = 0,temp;
	printf("\nenter the no of terms & value of x: ");
	scanf("%d%d",&n,&x);
	for(int i = 1;i <= n;i++){
		if(i & 1){
			temp = f1(x,i*2-1);
			sum += temp;
		 	printf("%d ",temp);
		 }
		 else{
		 	temp = f1(x,i*2-1);
			sum -= temp;
		 	printf("-%d ",temp);
		 }
	}
	printf("\nsum = %d", sum);
}
