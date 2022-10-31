//find the element in mountain array
//https://leetcode.com/problems/find-in-mountain-array/

/*probelm : finding element in mountain array.
				mountain array looks like increase 1st and
				attain peak value nad then decrease 
				ex:{1,3,5,7,6,5,2}
				so a mountain array has 2 arrays with in itself
				one is sorted ascending array
				second is sorted decending array

		ans  :  apply binary search for both sorted array
	algorithm:  1 => find peak index from this we can bound both sorted arrays
				2 => apply binary search for ascending arrays
				3 => if ans found return it
				4 => else apply binary search for decending arrays
				5 => if ans found return it
				6 => else return -1*/

#include<bits/stdc++.h>
using namespace std;

int Find_Peak(int *a,int n){

	int low = 0,high = n - 1,mid;

	while(low < high){

		mid = low + (high - low)/2;

		if(a[mid] > a[mid + 1])
			high = mid;
		else
			low = mid + 1;
	}
 		return low;
 }

int BS(int *a,int low,int high,int target){
	//below code applicable of doing binary search in
	//both ascending & decending order array
	int mid,ans;
	bool isass = a[low] < a[high];
	while(low <= high){

		mid = low + (high - low)/2;

		if(target == a[mid]){
			return mid;
		}
		if(isass){
			if(target < a[mid])
				high = mid - 1;
		 	else
				low = mid + 1;
		}
		else{
			if(target > a[mid])
				high = mid - 1;
		 	else
				low = mid + 1;
		}
	}
	return -1;
}

int Min_Index(int *a,int n,int target){

	int ans,peak;
	int ass,dec;

	//by finding peak index we can bound the both increasing
	// and decreasing part of array. 
	peak = Find_Peak(a,n);

	//search in increasing part of array
	ass  = BS(a,0,n-1,target);

	if(ass != -1)
		return ass;

	//search in decending part of array
	dec  = BS(a,peak+1,n-1,target);

	if(dec != -1)
		return dec;

	//if the given number is not found in the entire array return -1
	return -1;
	
}

int main(){

	int a[] = {0,1,3,4,55,53,7,2},ans;

	ans = Min_Index(a,sizeof(a)/sizeof(a[0]),2);

	cout <<"\n peak index: "<<ans;

	/*probelm : finding element in mountain array.
				mountain array looks like increase 1st and
				attain peak value nad then decrease 
				ex:{1,3,5,7,6,5,2}
				so a mountain array has 2 arrays with in itself
				one is sorted ascending array
				second is sorted decending array

		ans  :  apply binary search for both sorted array
	algorithm:  1 => find peak index from this we can bound both sorted arrays
				2 => apply binary search for ascending arrays
				3 => if ans found return it
				4 => else apply binary search for decending arrays
				5 => if ans found return it
				6 => else return -1*/


}
