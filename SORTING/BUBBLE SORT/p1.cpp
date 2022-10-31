//bubble sort
#include<bits/stdc++.h>
using namespace std;

void bubble(int *a,int n){

	int i,j,temp;
	bool swapped;
	for(i = 0;i < n;i++){
		swapped = false;
		for(j = 1;j < n - i;j++){
			if(a[j - 1] > a[j]){
				temp     = a[j - 1];
				a[j - 1] = a[j];
				a[j]     = temp;
				swapped  = true;
			}
		}
		if(!swapped)
			break;
	}

}

int main(){

	int a[] = {3};
	int n   = sizeof(a)/sizeof(a[0]);
	bubble(a,n);

	for(int i = 0;i < n;i++){
		cout<<" "<<a[i];
	}
}
