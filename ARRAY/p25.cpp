//minimum coins
#include<bits/stdc++.h>
using namespace std;



vector<int> mincoins(vector<int>& deno,int v){
	int n = deno.size(),i;
	vector<int> ans;

	for(i = n- 1;i >= 0;i--){

		while(v >= deno[i]){
			v -= deno[i];
			ans.emplace_back(deno[i]);
		}
	}
	return ans;
}


int main(){

	//vector<int> v = {25,10,5};
	vector<int> v = {9,6,5,1};
	//vector<int> v = {1,2,5,10,20,50,100,500,1000};

	cout<<"\nminimum coins of value 30 is ";
	vector<int> ans = mincoins(v,11);

	cout<<"\n";
	if(ans.size() == 0)
		cout <<" -1";
	else{
		for(auto it : ans)
			cout<<it<<" ";
	}


}