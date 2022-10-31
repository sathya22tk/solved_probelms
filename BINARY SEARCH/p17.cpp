//find the count of rotation happened in rotated array
#include<bits/stdc++.h>
using namespace std;

int Find_Peak(int *a,int n){

	int low = 0,high = n - 1,mid;

	while(low < high){

		mid = low + (high - low)/2;

		if(mid < high && a[mid] > a[mid + 1])
			return mid;
		if(mid > low && a[mid - 1] > a[mid])
			return mid - 1;
		if(a[low] <= a[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}
 		return -1;
 }


int main(){

	int a[] = {18,2,3,6,12},ans;

	ans = Find_Peak(a,sizeof(a)/sizeof(a[0]));

	if(ans == -1)
		cout <<"\n rotation count: 0 ";
	else
		cout <<"\n rotation count:  "<<ans + 1;
}
