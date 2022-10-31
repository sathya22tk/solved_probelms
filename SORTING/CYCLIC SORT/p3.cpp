/*Given an array nums containing n distinct numbers in the range
 [0, n],return the only number in the range that is missing from the array.*/

#include<bits/stdc++.h>
using namespace std;

void cycle(int *a,int n){
	int i = 0,correct;
	
	//loop runs till n-1
	while(i < n){
		/* here there r 2 checks befor swap
		1. element should less than n
		2. elemnt should != to  its index
		   if this 2 checks fails then move on to next index
		    atlat every element is placed at correct index except
		    elemnt that element is placed in the index
		    of missing number so return that index(also == elment)*/
		if(a[i] < n && i != a[i])
			swap(a[i],a[a[i]]);
		else
			i++;
	}
}


int miss(int *a,int n){
	//sort the array
	cycle(a,n);


	for(int i = 0;i < n;i++){
		if(i != a[i]){
			//i is returned only when the missing number
			// is in between {0 to n}
			return i;
		}
	}
	//n is returned only when the missing elemnt
	//itself the last element(which does't lie inside 
	//the array and also it does't caught on above for loo
	return n;
}

int main(){
	int a[] = {0,1};
	int n   = sizeof(a)/sizeof(a[0]);

	cout <<miss(a,n);

	
}


