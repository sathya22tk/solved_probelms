//Q: rotate the array by d elements one by one
//  tc: n*d  sc: 1
#include <bits/stdc++.h>
using namespace std;
void f(int a[],int n,int d){
	int temp;
		for(int i=0;i<d;i++){
			temp = a[0];
			for(int j=0;j<n;j++) a[j] = a[j+1];
		a[n-1] = temp;
		}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}	
}
int main(){
	int a[] = {1,2,3,4,5,6,7,8};
	int n = 8;
	int d = 5;
	f(a,n,d);
}