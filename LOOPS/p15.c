/*Write a c program to find the perfect numbers 
within a given number of range.*/
#include <stdio.h>
int find_perfect(int i){
	int sum = 0;
	for(int j = 1; j < i;j++)
		if(i % j == 0) sum += j;
	if(i == sum)
   		return 1;
	else
		return 0;
}
int main(){
	int start,end;
	printf("\nenter the start & end point: ");
	scanf("%d%d",&start,&end);
	for(int i  = start;i <= end;i++){
		if(find_perfect(i) == 1) 
			printf("%d ",i);
	}

}
