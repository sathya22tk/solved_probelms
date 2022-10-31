#include<bits/stdc++.h>
using namespace std;

/*void set_matriz_zero(vector<vector<int>>& nums){
	int i,j,k,l;
	int rows = nums.size(); 
	int col = nums[0].size(); 
	for(i = 0;i < rows;i++){
		for(j = 0;j < col;j++){
			if(nums[i][j] == 0)
				nums[i][j] = -1;
		}
	}

	for(i = 0;i < rows;i++){
		for(j = 0;j < col;j++){
			if(nums[i][j] == -1){

				for( k = 0;k < col;k++){
					if(nums[i][k] != -1)
						nums[i][k] = 0;
				}

				for( k = 0;k < rows;k++){
					if(nums[k][j] != -1)
						nums[k][j] = 0;
				}

				nums[i][j] = 0;
			}
		}
	}
	return;
}*/

void set_matriz_zero(vector<vector<int>>& nums){
	int i,j,k;
	int rows = nums.size(); 
	int col = nums[0].size();
	int col0 = 1; 
	for(i = 0;i < rows;i++){
		if(nums[i][0] == 0) col0 = 0;
		for(j = 1;j < col;j++){
			if(nums[i][j] == 0){
				nums[0][j] = 0;
				nums[i][0] = 0;
			}
		}
	}

	for(i = rows-1;i >= 0;i--){
		for(j = col-1;j >= 1;j--){
			if(nums[i][0] == 0 || nums[0][j] == 0)
				nums[i][j] = 0;
		}
		if(col0 == 0)
			nums[i][0] = 0;
	}
	return;
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

	//vector<vector<int>> v = {{1,1,1},{1,0,1},{1,1,1}};
	vector<vector<int>> v = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};

	cout<<"\n before: \n";
    display(v);

	set_matriz_zero(v); 

    cout<<"\n after: \n";
    display(v);
}