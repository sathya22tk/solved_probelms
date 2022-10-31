//cyclic sort with range [1 to n]
#include<bits/stdc++.h>
using namespace std;

void cycle(int *a,int n){
	int i = 0,correct;
	/*for(i = 0;i < n;i++){
		while(!(i == a[i] - 1)){
			correct = a[i] - 1;
			swap(a[i],a[correct]);
		}
	}*/
	while(i < n){
		correct = a[i] - 1;
		if(a[correct] != a[i])
			swap(a[correct],a[i]);
		else
			i++;
	}
}

int main(){
	int a[] = {3,2,1};
	int n   = sizeof(a)/sizeof(a[0]);

	cycle(a,n);

	for(int i = 0;i < n;i++)
		cout<<" "<<a[i];
}
