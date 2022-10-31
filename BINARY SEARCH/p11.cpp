//find 1st and last occurence of given number in sorted array
//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/
#include<bits/stdc++.h>
using namespace std;

int search(int a[],int n,int target,bool is1st){

	int ans = -1,low = 0,high = n-1,mid;

	while(low <= high){

		mid = low + (high - low)/2;

		if(target < a[mid])
			high = mid - 1;
		else if(target > a[mid])
			low = mid + 1;
		else{
			if(is1st){
				ans = mid;
				high = mid - 1;
			}
			else{
				ans = mid;
				low = mid + 1;	
			}		
		}
	}
	return ans;
}
vector<int> FL_Ocurrence(int a[],int n,int target){


	vector<int> v;

	/*first = search(a,n,target,1);
	last = search(a,n,target,0);*/
	v.emplace_back(search(a,n,target,1));
	v.emplace_back(search(a,n,target,0));
	return v;

}


int main(){

	int a[] = {12,34,56,78,78,78,78,98,98,98,102,103,111,111};
	int target;
	vector<int> ans;

	cout<<"\nenter the num : ";
	cin >> target;

	ans = FL_Ocurrence(a,sizeof(a)/sizeof(a[0]),target);

	cout << endl;
	for(auto it:ans)
		cout <<" "<<it<<" ";

}
