//Q: rotate the array by d elements(using temp array)
//  tc: n  sc:index Of d(size of temp array)
#include <bits/stdc++.h>
using namespace std;
void f(int a[],int n,int d){
	int j;
	int b[d] = {};
	for(int i=0;i<d;i++){
		b[i] = a[i];
	}
	for(int i=0;i<n-d;i++){
		a[i] = a[d+i];
	}
	for(int i=n-d,j=0;i<n;i++,j++){
		a[i] = b[j];
	}
	for(int i=0;i<n;i++){
		cout<< a[i] <<" ";
	}

	
}
int main(){
	int a[] = {1,2,3,4,5,6,7,8};
	int n = 8;
	int d = 5;
	f(a,n,d);
}