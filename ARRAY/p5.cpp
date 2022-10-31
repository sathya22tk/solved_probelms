
#include<bits/stdc++.h>
using namespace std;
void slarge(int *a,int n){
	int i;
	if(n >= 2){
	sort(a,a+n);
	for(i = n-2;i >= 0;i--){
		if(a[i] != a[n-1]){
			cout << a[i];
			return;
		}
	}
	cout << "no 2nd element";
	}
	else
		return cout << "invalid input";
}

int main(){
	int a[10] = {1,1,1};
	slarge(a,1);
}
