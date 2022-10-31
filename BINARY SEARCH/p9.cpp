//find the index of last occurence of given number
#include<bits/stdc++.h>
using namespace std;

int LastOccurence(int a[],int n,int target){

	int low = 0,high = n-1,mid,ans;

	while(low <= high){

		 mid = low + (high - low)/2;

		 if(target > a[mid])
		 	low = mid + 1;
		 else if(target < a[mid])
		 	high = mid - 1;
		 else{
			ans = mid;
			low = mid + 1;
		}
		 /*if(target == a[mid]){
		 	ans = mid;
		 	low = mid + 1;
		 	continue;
		 }

		 if(target < a[mid])
		 	high = mid - 1;
		 else
		 	low = mid + 1;*/
	}
	return ans;
}

int main(){
	int a[] = {1,2,3,4,5,5,5,5,89,89,89},target;

	cout <<"\nenter the number: ";
	cin >> target;

	int ans =LastOccurence(a,sizeof(a)/sizeof(a[0]),target);
	cout <<"\nindex : "<<ans;
}
