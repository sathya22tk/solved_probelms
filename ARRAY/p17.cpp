//three sum
#include<bits/stdc++.h>
using namespace std;

//doublets brute
/*vector<vector<int>> find_doublets(vector<int>& v){

	int i,j;
	int n = v.size();
	vector<vector<int>> ans;
	vector<int> temp;

	for(i = 0;i < n-2;i++){
		for(j = i+1;j < n;j++){
				if(v[i] + v[j] == 0){
					temp.emplace_back(v[i]);
					temp.emplace_back(v[j]);

					ans.emplace_back(temp);

					temp.clear();
				}	
			
		}
	}
	return ans;
}
//tripelts brute
vector<vector<int>> find_triplets(vector<int>& v){

	int i,j,k;
	int n = v.size();
	vector<vector<int>> ans;
	vector<int> temp;

	for(i = 0;i < n-2;i++){
		for(j = i+1;j < n;j++){
			for(k = j+1;k < n;k++){
				if(v[i] + v[j] + v[k] == 0){
					temp.emplace_back(v[i]);
					temp.emplace_back(v[j]);
					temp.emplace_back(v[k]);

					ans.emplace_back(temp);

					temp.clear();
				}
			}
		}
	}
	return ans;



}*/

vector<vector<int>> find_triplets(vector<int>& v){

	int i;
	int n = v.size();
	vector<vector<int>> ans;
	int low,high,sum = 0,target;

	sort(v.begin(),v.end());

	for(i = 0;i < n-2;i++){
		if(i == 0 || (i > 0 && v[i] != v[i-1])){
	
		target = -1*v[i];
		low = i+1;
		high = n-1;
			while(low < high){
				if(v[low] + v[high] < target)
					low++;
				else if(v[low] + v[high] > target)
					high--;
				else{
					vector<int> temp;
					temp.emplace_back(v[i]);
					temp.emplace_back(v[low]);
					temp.emplace_back(v[high]);

					ans.emplace_back(temp);
	
					while(low < high && v[low] == v[low+1]) low++;
			
					while(low < high  && v[high] == v[high-1]) high--;

					low++;high--;
				}
			}
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
}

int main(){

	//vector<int> v = {-1,0,1,2,-1,-4};
	//vector<int> v = {0,1,1};
	//vector<int> v = {0,0,0};
	vector<int> v = {-2,-2,-1,-1,-1,0,0,0,2,2,2,};

	vector<vector<int>> ans = find_triplets(v);


	cout<<"\n triplets: ";
	display(ans);
//-----------------------------------------------
	/*vector<int> v = {-1,0,2,1,3,98,-2,4,2,0};

	vector<vector<int>> ans = find_doublets(v);


	cout<<"\n doublets: ";
	display(ans);*/

}