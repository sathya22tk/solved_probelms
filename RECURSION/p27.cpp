//
#include<bits/stdc++.h>
using namespace std;

class solution{
public:

	/*void solve(int i,int j,vector<vector<int>>& m,vector<vector<int>>& visited,
		  string move,int n,vector<string>& ans){

		if(i == n-1 and j == n-1){
			ans.emplace_back(move);
			return;
		}

		//down
		if(i+1 < n && visited[i+1][j] == 0 && m[i+1][j] == 1){
			visited[i+1][j] = 1;
			solve(i+1,j,m,visited,move + 'D',n,ans);
			visited[i+1][j] = 0;
		}

		//left
		if(j-1 >= 0 && visited[i][j-1] == 0 && m[i][j-1] == 1){
			visited[i][j-1] = 1;
			solve(i,j-1,m,visited,move + 'L',n,ans);
			visited[i][j-1] = 0;
		}

		//right
		if(j+1 < n && visited[i][j+1] == 0 && m[i][j+1] == 1){
			visited[i][j+1] = 1;
			solve(i,j+1,m,visited,move + 'R',n,ans);
			visited[i][j+1] = 0;
		}

		//up
		if(i-1 >= 0 && visited[i-1][j] == 0 && m[i-1][j] == 1){
			visited[i-1][j] = 1;
			solve(i-1,j,m,visited,move + 'U',n,ans);
			visited[i-1][j] = 0;
		}

	}*/

	void solve(int i,int j,vector<vector<int>>& m,vector<vector<int>>& visited,
		  string move,int n,vector<string>& ans,vector<int>& di,vector<int>& dj){

		if(i == n-1 and j == n-1){
			ans.emplace_back(move);
			return;
		}

		string dir ="DLRU";
		for(int ind = 0;ind < 4;ind++){
			int nexti = i + di[ind]; 
			int nextj = j + dj[ind];
			if(nexti < n  && nextj >=0 && nextj < n && nexti >= 0 && visited[nexti][nextj] == 0 && m[nexti][nextj] == 1){
				visited[i][j] = 1;
				solve(nexti,nextj,m,visited,move + dir[ind],n,ans,di,dj);
				visited[i][j] = 0;
			}
		}


	}

	vector<string> findpath(vector<vector<int>>& m){
		int n = m.size();
		vector<string> ans;
		vector<vector<int>> visited(n,vector<int>(n,0));
		vector<int> di = {+1,0,0,-1};
		vector<int> dj = {0,-1,+1,0};

		if(m[0][0] == 1)
			solve(0,0,m,visited,"",n,ans,di,dj);

		return ans;
	}
};

int main(){

	solution obj;
	vector<vector<int>> m = {{1,0,0,0},
							 {1,1,0,1},
							 {1,1,0,0},
							 {0,1,1,1}};
	vector<string> ans = obj.findpath(m);

	cout<<"\npaths are: \n\n";

	if(ans.size() == 0)
		cout<<"-1";
	else{
		for(auto it : ans)
			cout<<it<<"\n";
	}


}