//print 1st -ve number from every window of size d
//brute force approch
#include<bits/stdc++.h>
using namespace std;

void FirstNegativeOfWindow(int *a,int n,int d){
	bool flag;
	for(int i = 0;i < (n-d+1);i++){
		flag = false;
		for(int j = 0;j < d;j++){
			if(a[j+i] < 0){
				cout<<a[j+i]<<" ";
				flag = true;
				break;
			}
		}
		if(!flag)
			cout<<" 0 ";
	}
	return;
}

int main(){
		
	int a[] = {12,-1,-7,8,-15,30,16,28},d;
	int n = sizeof(a)/sizeof(a[0]);
	cout<<"\nenter the d: ";
	cin >> d;
	FirstNegativeOfWindow(a,n,d);
}




