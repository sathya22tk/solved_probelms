//
#include<bits/stdc++.h>
using namespace std;

int meetings(vector<int>& start,vector<int>& end){

	vector<int> temp(2);
	temp[0] = start[0];
	temp[1] = end[0];

	int i = 1,count = 0;
	int n = start.size();

	cout<<"\n";
	while(i < n){

		if(!(start[i] < temp[1] && start[i] > temp[0])){
			count++;
			temp[0] = start[i];
			temp[1] = end[i];
			cout<<" "<<i;
		}
		i++;

	}
	return count;



}

int main(){
	vector<int> start = {1,3,0,5,8,5};
	vector<int> end = {2,4,6,7,9,9};

	//vector<int> start = {1,0,3,8,5,8};
	//vector<int> end = {2,6,4,9,7,9};

	cout<<"\n\nmaximum no of meetings = "<<meetings(start,end);
}