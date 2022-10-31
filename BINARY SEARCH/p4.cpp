//finding the 1st occurence of the element in sorted array
#include<bits/stdc++.h>
using namespace std;
int Find1stOccurence(int *a,int n,int target){
	int mid,low = 0,high = n,ans;

	if(target < a[0] || target > a[n]){
		cout << "Given number is not preent in array: ";
		return 1;
	}

	while(low <= high){
		mid = low +(high-low)/2;

		if(a[mid] == target){
			ans = mid;
			high = mid - 1;
			continue;
		}

		if(a[mid] < target)
			low = mid + 1;
		else
			high = mid - 1;
	}
	cout << "firt occurence is at index "<< ans;
	return 1; 
}
int main(){
	int a[] = {1,2,3,4,6,6,6,6};

	 Find1stOccurence(a,sizeof(a)/sizeof(a[0])-1,2);
 
}
