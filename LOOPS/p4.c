//print the 1st n natural even numbers: 
#include <stdio.h>
int main(){
 	int n,sum = 0;
 	printf("\nenter positive number: ");
 	scanf("%d",&n);
 	printf("\nFirst %d terms of +ve even numbers are: ",n);
 	for(int i = 1;i <= n;i++){
 			printf("%d ",i*2);
 			sum += i*2;
 	}
 	printf("\nsum = %d",sum);
}    
 
