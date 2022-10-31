//permutations (version 2)
#include<bits/stdc++.h>
using namespace std;

void display(vector<int>& ans){
    cout<<"\n";
    for(auto it : ans)
        cout<< it<<" ";
}

void permutations(int index,vector <int>& v){

	if(index >= v.size()){
		display(v);
		return;
	}

	for(int i = index;i < v.size();i++){
		swap(v[index],v[i]);
		permutations(index+1,v);
		swap(v[index],v[i]);
		
	}


}

int main(){

    vector <int> v = {1,2,3};
    permutations(0,v);    
}