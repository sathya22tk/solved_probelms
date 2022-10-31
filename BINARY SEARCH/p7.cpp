//celing of a number
#include<bits/stdc++.h>
using namespace std;

int celing(int *a,int n,int target){

	int low = 0,c,high = n-1,mid;

	//what if target is greater than the greatest element in array
	if(target > a[high])
		return -1;

	while(low <= high){
		mid = low + (high-low)/2;

		if(a[mid] == target)
			return a[mid];

		if(target < a[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	/*c = a[mid + 1];
	if(c > target){
		cout << "\nceling is "<< c;
		return 1;
	}*/
	return a[low];
}
int main(){
  
	int a[] = {2,3,5,9,15,23,25},target,ans;
	cout << "enter the target number: ";
	cin >> target;  
	
	ans = celing(a,sizeof(a)/sizeof(a[0]),target);

	cout <<"\nceling is "<<ans;

}
