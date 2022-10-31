//find element in rotated array
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

 int BS(int *a,int low,int high,int target){
	//below code applicable of doing binary search in
	//both ascending & decending order array
	int mid,ans;
	
	while(low <= high){

		mid = low + (high - low)/2;

		if(target == a[mid])
			return mid;
		
		if(target < a[mid])
			high = mid - 1;
	 	else
			low = mid + 1;
		
	}
	return -1;
}

int Search_Rotated(int *a,int n,int target){
	int ans1,ans2,peak;

	peak = Find_Peak(a,n);

	ans1 = BS(a,0,peak,target);

	if(ans1 != -1)
		return ans1;

	ans2 = BS(a,peak+1,n,target);

	if(ans2 != -1)
		return ans2;

	return -1;

}

int main(){
	int a[] = {3,1},ans;

	ans = Search_Rotated(a,sizeof(a)/sizeof(a[0]),3);

	cout <<"\n target index: "<<ans;
}