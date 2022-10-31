//subset (second version)
#include<bits/stdc++.h>
using namespace std;

void display(vector<vector <int>>& ans){
    cout<<"\n";
    if(ans.size() == 0) cout<<"{ }";
    for(auto &it : ans){
        for(auto p : it )
            cout<< p<<" ";
        cout<<"\n";
    }
}


void subsets(int index,vector<int>& v,vector<int>& ds,vector<vector <int>>& ans){

    ans.emplace_back(ds);

    for(int i = index;i < v.size();i++){
        if(i > index && v[i] == v[i-1])
             continue;

        ds.emplace_back(v[i]);
        subsets(i+1,v,ds,ans);
        ds.pop_back();
    }
     

}


int main(){

    //vector<int> v = {10,1,2,7,6,1,5};
    vector<int> v = {1,1,2};


    vector<int> ds;
    vector<vector <int>> ans;
    sort(v.begin(),v.end());
    subsets(0,v,ds,ans);
    display(ans);
    
}