//
#include<bits/stdc++.h>
using namespace std;

int consecutive_1(vector<int>& v){

	int i = 0,count = 0,maxcount = 0;
	int n  = v.size();

	while(i < n){

		if(v[i] == 1)
			count++;
		else
			count = 0;

		maxcount = max(maxcount,count);
		i++;
	}
	return maxcount;
}

int main(){

	vector<int> v = {1,1,1,1,0,1,1,1,0,1,1,1,1,1};
	cout<<"\n count = "<<consecutive_1(v);
}