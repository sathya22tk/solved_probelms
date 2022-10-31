//permutations (version 1)
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
	bool issafe(int row,int col,vector<string> board,int n){

		int duprow = row;
		int dupcol = col;

		//upper left diagonal

		while(row >= 0 && col >= 0){
			if(board[row][col] == 'Q')
				return 0;

			row--;col--;
		}


		row = duprow;
		col = dupcol;
		//left side
		while(col >= 0){
			if(board[row][col] == 'Q')
				return 0;

			col--;
		}


		row = duprow;
		col = dupcol;
		//lower left diagoanal
		while(row < n && col >= 0){
			if(board[row][col] == 'Q')
				return 0;

			row++;col--;
		}
		return 1;
	}

public:
	void solve(int col,vector<string>& board,vector<vector<string>>& ans,int n){

		if(col == n){
			ans.push_back(board);
			return;
		}

		for(int row = 0;row < n;row++){
			if(issafe(row,col,board,n)){

				board[row][col] = 'Q';
				solve(col+1,board,ans,n);
				board[row][col] = '.';
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

	   	solve(0,board,ans,n);
	   	return ans;
	}
};


int main(){

	solution obj;
  
   int n = 4;
   vector<vector<string>> ans = obj.solveq(n);
   
   	display(ans);    
}