//reverse an array without using extra space
#include <bits/stdc++.h>
using namespace std;
int reverse(int *a,int n){
	for(int i=0;i<n/2;i++)
		swap(a[i],a[n-1-i]);
	for(int i=0;i<n;i++)	cout<<a[i]<<" ";
	return 0;
}
int main(){
	int a[6] = {1,2,3,4,5,6};
	reverse(a,6);
}