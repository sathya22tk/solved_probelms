/* print sum of this series 1+x+x^2/2!+x^3/3!+....*/
#include <stdio.h>
float f1(int x,int i){
	int mul = 1;
	for(int j = 1;j <= i;j++)  mul *= x;
	return mul;
}
float f2(int i){
	if(i == 1) return 1;
	return i*f2(i-1);
}
int main(){
	int n,x;
	float sum = 0;
	printf("\nenter the no of terms & value of x: ");
	scanf("%d%d",&n,&x);
	for(int i = 2;i < n;i++) sum += f1(x,i)/f2(i);
	printf("\nsum = %f", 1.0+x+sum);
}
