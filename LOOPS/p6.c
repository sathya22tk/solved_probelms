/*1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms.. generate this
series and theie sum*/
#include <stdio.h>
int main(){
	int n;
	float sum = 0;
	printf("enter number of terms : ");
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		printf("1/%d + ",i);
		sum += 1/(float)i;
	}
	printf(" = %f",sum);
        
}    
 
