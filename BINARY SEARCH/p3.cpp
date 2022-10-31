//search a number in 2d matrix using binary search
//tc: O(n)
#include<bits/stdc++.h>
using namespace std;
pair<int,int> search(int a[4][4],int n,int target){

	pair<int,int> p = {-1,-1};

	if(n == 0) return p;

	int smallest = a[0][0], largest = a[n-1][n-1];
	if(target < smallest || target > largest){
		cout <<"given num is not presend in array: ";
		return p;
	}

	int i = 0,j = n-1; 
	while(i < n && j >= 0){

		if(a[i][j] == target){
			p.first = i,p.second = j;
			return p;
		}

		if(a[i][j] > target)
			j--;
		else
			i++;
	}

	cout <<"number not found:";
	return p;
}
int main(){
	int a[4][4] = { {12,18,27,33},{17,21,30,44},{20,25,36,50},
			   {23,32,49,58}
			};
	int target;
	pair<int,int> p;
	cout << "enter the num to be search: ";
	cin >> target;
	p = search(a,4,target);
	cout<<p.first<<","<<p.second;
}
