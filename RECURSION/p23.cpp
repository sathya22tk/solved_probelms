//permutations (version 2)
#include<bits/stdc++.h>
using namespace std;

void display(vector<vector<string>>& ans){
    cout<<"\n\n";
    for(int i = 0;i < ans.size();i++){
    	cout<<"\narrangement "<<i+1<<"\n";
    	for(int j = 0;j < ans[0].size();j++){
    		cout<<ans[i][j];
    		cout<<"\n";
    	}
    	cout<<"\n";
    }    
}
class solution{

public:
	void solve(int col,vector<string>& board,
		vector<vector<string>>& ans,int n,
		vector<int>& left,vector<int>& lower,
		vector<int>& upper){

		if(col == n){
			ans.push_back(board);
			return;
		}

		for(int row = 0;row < n;row++){
			if(left[row] == 0 && lower[row+col] == 0
				&& upper[n-1 + col-row] == 0){

					left[row] = 1;
					lower[row+col] = 1;
					upper[n-1 + col-row] = 1;
					board[row][col] = 'Q';

					solve(col+1,board,ans,n,left,lower,upper);

					board[row][col] = '.';
					left[row] = 0;
					lower[row + col] = 0;
					upper[n-1 + col-row] = 0;

			}
		}
	}
public:
	vector<vector<string>> solveq(int n){
		vector<string>board(n);
		vector<vector<string>> ans;
	   string s(n,'.');
	   for(int i = 0;i < n;i++)
	   		board[i] = s;

	   	vector<int> left(n,0);
	   	vector<int> lower(2*(n-1),0);
	   	vector<int> upper(2*(n-1),0);
	   	solve(0,board,ans,n,left,lower,upper);
	   	return ans;
	}
};


int main(){

	solution obj;
  
   int n = 4;
   vector<vector<string>> ans = obj.solveq(n);
   
   	display(ans);    
}