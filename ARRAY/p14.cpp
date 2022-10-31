//stock bUy&sell
#include<bits/stdc++.h>
using namespace std;

/*//brute
int max_profit(vector<int>& v){
	int i,j,maxp = 0;
	int n = v.size();

	for(i = 0;i < n;i++){
		for(j = i+1;j < n;j++){
			if(v[j] > v[i])
				maxp = max(maxp,v[j]-v[i]);
		}
	}
	return maxp;
}*/

//optimal
int max_profit(vector<int>& v){
	int n = v.size();
	int maxp = 0,minprice = INT_MAX;
	for(int i = 0;i < n;i++){
		minprice = min(v[i],minprice);
		maxp = max(maxp,v[i] - minprice);
	}
	return maxp;
}
int main(){
	//vector<int> v = {7,1,5,3,6,4};
	vector<int> v = {7,6,4,3,1};
	cout<<"\nprofit: "<<max_profit(v);
}