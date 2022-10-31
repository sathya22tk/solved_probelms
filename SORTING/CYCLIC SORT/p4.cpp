/*Given an array nums of n integers where nums[i] is in the range 
[1, n], return an array of all the integers in the range [1, n] that do not appear in nums.

https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/ */


#include<bits/stdc++.h>
using namespace std;

void cycle(int *a,int n){
	int i = 0,correct;

	while(i < n){
		correct = a[i] - 1;
		if(a[correct] != a[i]){
			swap(a[correct],a[i]);
			
		}
		else{
			i++;
		}
	}
}

vector<int> miss(int *a,int n){
	vector<int> v;
	cycle(a,n);
	for(int i = 0;i < n;i++){
		if(a[i]-1 != i){
			v.emplace_back(i+1);
		}
	}
	return v;
}
int main(){
	int a[] = {4,3,2,7,1,2,3,1};
	int n   = sizeof(a)/sizeof(a[0]);

	vector<int> v = miss(a,n);
	for(auto it : v)
		cout<<" "<<it;
}
