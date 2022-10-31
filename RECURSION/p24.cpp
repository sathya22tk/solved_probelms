//suduko
#include<bits/stdc++.h>

using namespace std;

void display(vector<vector <char>>& ans){
    cout<<"\n";
    for(auto &it : ans){
        for(auto p : it)
        	cout<< p<<" ";
        cout<<"\n";
    }
}
	

bool issafe(int row,int col,char c,vector<vector<char>>& board){

	for(int i = 0;i < 9;i++){

		//check for rows
		if(board[row][i] == c)
			return 0;

		//check for col
		if(board[i][col] == c)
			return 0;

		if(board[3*(row/3) + (i/3)][3*(col/3) + (i%3)] == c)
			return 0;
	}
	return 1;
}

bool solve(vector< vector <char> > & board){

	for(int i = 0;i < board.size();i++){
		for(int j = 0;j < board[0].size();j++){
			if(board[i][j] == '.'){
				for(char c = '1';c <= '9';c++){
					if(issafe(i,j,c,board)){
						board[i][j] = c;

					if(solve(board))
						return 1;
					else
						board[i][j] = '.';

					}
				}
				return 0;
			}
		}
	}

	return 1;
}

int main(){

vector<vector<char>> board = {{'5','3','.','.','7','.','.','.','.'},
						   {'6','.','.','1','9','5','.','.','.'},
						   {'.','9','8','.','.','.','.','6','.'},
						   {'8','.','.','.','6','.','.','.','3'},
						   {'4','.','.','8','.','3','.','.','1'},
						   {'7','.','.','.','2','.','.','.','6'},
						   {'.','6','.','.','.','.','2','8','.'},
						   {'.','.','.','4','1','9','.','.','5'},
						   {'.','.','.','.','8','.','.','7','9'}};

	cout<<"given puzzle: \n";
    display(board);

    solve(board);

    cout<<"sloved puzzle: \n";
    display(board);
}