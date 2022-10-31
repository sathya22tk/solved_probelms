//find peak index of mountain array
//https://leetcode.com/problems/peak-index-in-a-mountain-array/
#include<bits/stdc++.h>
using namespace std;

int peak(int *a,int n){
	int low = 0,high = n - 1,mid;

	while(low < high){

		mid = low + (high - low)/2;

		/*or if(a[mid] > a[mid - 1] && a[mid] > a[mid + 1])
			return mid;*/

		/*if(low == high){
			//in the end low==high and pointing to the largest
			//number becoz of the 2 checks
			return low;
		}*/

		if(a[mid] > a[mid + 1]){
			//u r at he decreasing part of the array
			//this may be the answer but look for left
			high = mid;
		}
		else{
			//u r at the increasing part of array
			//so u r already know that a[mid] < a[mid+1]
			//then go with mid+1 since we r looking for greatest element of array
			low = mid + 1;
		}
	}
 		return low; //(for this make while(low  high)both low and high are same
}

int main(){

	int a[] = {1},ans;
	ans = peak(a,sizeof(a)/sizeof(a[0]));

	cout <<"\n peak index: "<<ans;


}

