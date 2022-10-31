//combination of given sum
#include<bits/stdc++.h>
using namespace std;

void display(vector<int>& ans){
    cout<<"\n";
    if(ans.size() == 0) cout<<"{ }";
    for(auto it : ans)
        cout<< it<<" ";
}


void subsequence(int index,vector<int>& v,vector<int>& ans,int targetsum){

    
    if(targetsum == 0){
        display(ans);
        return;
    } 
    if(index >= v.size()){
        if(targetsum == 0)
            display(ans);
        return;
    }

    //pick
    if(v[index] <= targetsum){
        ans.emplace_back(v[index]);
        subsequence(index,v,ans,targetsum - v[index]);
        ans.pop_back();
    }
     //not pick
     subsequence(index+1,v,ans,targetsum);

}


int main(){

    vector<int> v = {2,3,6,7};

    int targetsum = 7;

    vector<int> ans;
    subsequence(0,v,ans,targetsum);
    
}