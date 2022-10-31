//merge intervals
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& v){

	vector<vector<int>> ans;
	vector<int> temp = v[0];

	int i,n = v.size();

	sort(v.begin(),v.end());

	 
	for(auto it : v){

		if(it[0] <= temp[1])
			temp[1] = max(temp[1],it[1]);
		else{
			ans.emplace_back(temp);
			temp = it;
		}
	}
	ans.emplace_back(temp);

	return ans;
}


void display(vector<vector<int>>& ans){

	for(vector<int> v1d : ans){
        cout<<" [";
        for (int it : v1d)
            cout<<" "<<it;
        cout<<" ]\n";
    }
}

int main(){

	//vector<vector<int>> v ={{1,3},{2,6},{8,10},{15,18}};
	//vector<vector<int>> v ={{1,4},{4,5}};
	vector<vector<int>> v ={{1,3},{2,4},{2,6},{8,9},{8,10},{9,11},{15,18},{16,17}};
	cout<<"\n before merge: ";
	display(v);


	vector<vector<int>> ans = merge(v);


	cout<<"\n after merge: ";
	display(ans);

}