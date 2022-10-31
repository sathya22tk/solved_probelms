//palindrome partition
#include<bits/stdc++.h>
using namespace std;

void display(vector<vector<string>>& ans){
    cout<<"\n\n";
    for(int i = 0;i < ans.size();i++){
    	cout<<"\npartition "<<i+1<<"\n";
    	for(int j = 0;j < ans[0].size();j++){
    		cout<<ans[i][j];
    		cout<<"\n";
    	}
    	cout<<"\n";
    }    
}
class solution{

public:


	vector<vector<string>> solve(string s){

		vector<vector<string>> ans;
		vector<string> ds;
		partition(0,s,ans,ds);
		return ans;

	}
	


	void partition(int index,string s,
					vector<vector<string>>& ans,
					vector<string>& ds){

			if(index == s.size()){
				ans.emplace_back(ds);
				return;
			}

			for(int i = index;i < s.size();i++){

				if(ispalindrome(index,i,s)){
					ds.emplace_back(s.substr(index,i - index + 1));
					partition(i+1,s,ans,ds);
					ds.pop_back();
				}
			}
	}


	bool ispalindrome(int start,int end,string s){

		while(start <= end){
			if(s[start++] != s[end--])
				return 0;
		}
		return 1;
	}


	


};


int main(){
	solution obj;
    string s = "aabb";
    vector<vector<string>> ans = obj.solve(s);
   	display(ans);    
}