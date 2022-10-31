//selction sort
#include<bits/stdc++.h>
using namespace std;

int maxi(int *a,int start,int last){

	int max = start;
	for(int i = start;i <= last;i++){
		if(a[i] > a[max])
			max = i;
	}
	return max;
}

/*void swapped(int *a,int first,int second){
	int temp = a[first];
	a[first]   = a[second];
	a[second]    = temp;
}*/
void selection(int *a,int n){

	int maxindex,i,last;
	for(i = 0;i < n;i++){
		last = n - 1 - i;
		maxindex = maxi(a,0,last);
		//swapped(a,maxindex,last);
		swap(a[maxindex],a[last]);
	}
}

int main(){

	int a[] = {2,1,0};
	int n = sizeof(a)/sizeof(a[0]);

	selection(a,n);

	for(int i = 0;i < n;i++){
		cout<<" "<<a[i];
	}
}
