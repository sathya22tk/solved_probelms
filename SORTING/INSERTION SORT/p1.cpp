//insertion sort
#include<bits/stdc++.h>
using namespace std;



void insertion(int *a,int n){

	int i,j,min;
	//i is counter,j is upper bound here
	for(i = 0;i < n-1;i++){
		for(j = i + 1;j > 0;j--){
			if(a[j-1] > a[j])
				swap(a[j-1],a[j]);
			else
				break;
		}
	}
}


int main(){

	int a[] = {2,3,1};
	int n   = sizeof(a)/sizeof(a[0]);

	insertion(a,n);

	for(int i = 0;i < n;i++)
		cout<<" "<<a[i];
 }
