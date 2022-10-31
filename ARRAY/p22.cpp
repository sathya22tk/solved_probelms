//
#include<bits/stdc++.h>
using namespace std;

int platforms(vector<int>& s,vector<int>& e){

	int i = 1,j = 0;
	int pt = 1,maxi = 1;
	int n = s.size();

	sort(s.begin(),s.end());
	sort(e.begin(),e.end());

	while(i < n && j < n){

		if(s[i] <= e[j]){ //train arrives so add
			pt++;
			i++;
		}
		else{			  //train leaves so remove
			pt--;
			j++;
		}
		maxi = max(pt,maxi);
	}
	return maxi;
}


int main(){

	vector<int> s = {120,50,550,200,700,850};
	vector<int> e = {600,550,700,500,900,1000};

	cout<<"\n no of platforms = "<<platforms(s,e);
}