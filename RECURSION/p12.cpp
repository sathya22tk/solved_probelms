//print all the subsequence
#include<bits/stdc++.h>
using namespace std;

void display(vector<int>& ans){
    cout<<"\n";
    if(ans.size() == 0) cout<<"{ }";
    for(auto it : ans)
        cout<< it<<" ";
}


void subsequence(int index,vector<int>& v,vector<int>& ans){

    if(index >= v.size()){
        display(ans);
        return;
    }

    //pick
    ans.emplace_back(v[index]);
    subsequence(index+1,v,ans);

    ans.pop_back();

    //not pick
    subsequence(index+1,v,ans);
}


int main(){

    vector<int> v = {1,1,2};
    vector<int> ans;

    subsequence(0,v,ans);
    
}