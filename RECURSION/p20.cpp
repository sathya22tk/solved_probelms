//permutations (version 1)
#include<bits/stdc++.h>
using namespace std;

void display(vector<int>& ans){
    cout<<"\n";
    for(auto it : ans)
        cout<< it<<" ";
}

void permutations(vector <int>& v,vector <int>& ds,vector <int>& fre){

	if(ds.size() == v.size()){
		display(ds);
		return;
	}

	for(int i = 0;i < v.size();i++){

		if(!fre[i]){
			fre[i] = 1;
			ds.emplace_back(v[i]);
			permutations(v,ds,fre);
			fre[i] = 0;
			ds.pop_back();
		}
	}


}

int main(){

    vector <int> v = {1,2,3};
    vector <int> ds;
    int n = v.size();
    vector <int> fre(n,0);
    permutations(v,ds,fre);

    
}