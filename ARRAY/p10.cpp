#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> generate_pascal(int n){
	int i,j;
	vector<vector<int>> ans(n);

	for(i = 0;i < n;i++){
			ans[i].resize(i+1);
			ans[i][0] = ans[i][i] = 1;
		for(j = 1;j < i;j++){	
			ans[i][j] =ans[i - 1][j] + ans[i - 1][j - 1]; 
		}
	} 
	return ans;

}
void display(vector<vector<int>>& ans){

	for(vector<int> v1d : ans){
        cout<<" [";
        for (int it : v1d)
            cout<<" "<<it;
        cout<<" ]\n";
    }

    /*for(int i = 0;i < ans.size();i++){
    	for(int j = 0;j < ans[i].size();j++)
    		cout<<" "<<ans[i][j];
    	cout<<"\n";
    }*/

}


int main(){

	vector<vector<int>> v = generate_pascal(9);

    cout<<"\n pascal triangle: \n";
    display(v);
}