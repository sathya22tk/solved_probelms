//find element in decending ordered array(binary search)
#include<bits/stdc++.h>
using namespace std;

int search(int *a,int n,int target){
	int mid,low = 0,high = n-1,smallest = a[n-1],largest = a[0];

	if(n == 0){
		cout <<"---invalid input becoz only one element present---"; 
		return 1;
	}

	if(target < smallest || target > largest){
		cout << "---Given number not present in array---";
		return 1;
	}

	while(low <= high){

		mid = low + (high-low)/2;

		if(a[mid] == target){
			cout << "---Given number found at index "<<mid;
			return 1;
		}

		if(target < a[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}
	cout << "Given number not found: ";
	return 1;
}

int main(){
	int a[] = { 98,76,56,44,33,19,6},target,ans;

	cout << "enter the number to find: ";
	cin >> target;

	ans = search(a,sizeof(a)/sizeof(a[0]),target);

}
 