//rotate matrix(right)
#include<bits/stdc++.h>
using namespace std;

void display(vector<vector<int>>& ans){

	for(vector<int> v1d : ans){
        cout<<" [";
        for (int it : v1d)
            cout<<" "<<it;
        cout<<" ]\n";
    }
}


/*//brute
void rotateright(vector<vector<int>>& v){
	int i,j,n = v.size();
	vector<vector<int>> ans(n,vector<int> (n,0));

	for(i = 0;i < n;i++){
		for(j = 0;j < n;j++){
			ans[j][n-i-1] = v[i][j];
		}
	}

}*/

void rotateright(vector<vector<int>>& v){

	int i,j;
	int n = v.size();

	for(i = 0;i < n;i++){
		for(j = 0;j < i;j++){
			swap(v[i][j],v[j][i]);
		}
	}

	cout<<"test: \n";
	display(v);

	for(i = 0;i < n;i++)
		reverse(v[i].begin(),v[i].end());

	return;
}

void rotateleft(vector<vector<int>>& v){

	int i,j;
	int n = v.size();


	for(i = 0;i < n;i++)
		reverse(v[i].begin(),v[i].end());

	for(i = 0;i < n;i++){
		for(j = 0;j < i;j++){
			swap(v[i][j],v[j][i]);
		}
	}

	return;
}


int main(){

	vector<vector<int>> v ={{1,2,3},{4,5,6},{7,8,9}};

	cout<<"\n before: \n";
    display(v);

	rotateleft(v); 

    cout<<"\n after left rotate: \n";
    display(v);

    //cout<<"\n after right rotate: \n";
    //display(v);

}