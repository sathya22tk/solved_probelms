//print largest sum of d consecutive elements
#include<bits/stdc++.h>
using namespace std;

int LarConSum(int *a,int n,int d){
	int csum = 0,i;

	//finding 1t d elemnts sum
	for(i = 0;i < d;i++){
		csum += a[i];
	}
	int maxsum = csum;
	for( ;i < n;i++){
		csum -= a[i-d];
		csum += a[i];
		maxsum = max(maxsum,csum);
	}
	return maxsum;
}

int main(){
		
	int a[] = {100,200,300,400},d;
	int n = sizeof(a)/sizeof(a[0]);
	cout<<"\nenter the d: ";
	cin >> d;
	cout<<"\nlargest consecutive sum of "<<d<<" is : "<<LarConSum(a,n,d);
}




