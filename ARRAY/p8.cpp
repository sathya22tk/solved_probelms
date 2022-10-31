//print largest sum of d consecutive elements
#include<bits/stdc++.h>
using namespace std;

int LarConSum(int *a,int n,int d){
	int csum,maxsum = 0,i = 0;

	while(i < n - d){
		csum = 0;
		for(int j = i;j < i+d;j++){
			csum += a[j];
		}
		if(csum > maxsum){
			maxsum = csum;
		}
		i++;
	}
	return maxsum;
}

int main(){
		
	int a[] = {1,7,6,2,3,4,5},d;
	int n = sizeof(a)/sizeof(a[0]);
	cout<<"\nenter the d: ";
	cin >> d;
	cout<<"\nlargest consecutive sum of "<<d<<" is : "<<LarConSum(a,n,d);
}




