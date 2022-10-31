//order agnostic binary search(works for both sort (ascending & decending))

#include<bits/stdc++.h>
using namespace std;

int search(int *a,int n,int target){
	int mid,low = 0,high = n-1;
	bool isass = a[0] < a[high];

	if(n == 0){
		cout <<"---invalid input becoz only one element present---"; 
		return 1;
	}

	
	while(low <= high){

		mid = low + (high-low)/2;

		
		if(a[mid] == target){
			cout << "---Given number found at index "<<mid;
			return 1;
		}

		if(isass){
			if(target < a[mid])
				high = mid -1;
			else
				low = mid + 1;
		}
		else{
			if(target > a[mid])
				high = mid -1;
			else
				low = mid + 1;
		}
	}
	cout << "Given number not found: ";
	return 1;
}

int main(){
	int a[] = { 98,76,56,44,33,19,6},target,ans;
	int b[] = {2,4,7,8,34,56,87,90};

	cout << "enter the number to find: ";
	cin >> target;

	ans = search(b,sizeof(b)/sizeof(b[0]),target);

}
 