//combination of given sum(second version)
#include<bits/stdc++.h>
using namespace std;

void display(vector<int>& ans){
    cout<<"\n";
    if(ans.size() == 0) cout<<"{ }";
    for(auto it : ans)
        cout<< it<<" ";
}


void subsequence(int index,vector<int>& v,vector<int>& ans,int targetsum){

    //base cases
    if(targetsum == 0){
        display(ans);
        return;
    } 

    if(index >= v.size()){
        if(targetsum == 0)
            display(ans);
        return;
    }
    

    
    for(int i = index;i < v.size();i++){
        if(i > index && v[i] == v[i-1])
            continue;

        if(v[index] > targetsum)
            break;

        ans.emplace_back(v[i]);
        subsequence(i+1,v,ans,targetsum-v[i]);
        ans.pop_back();
    }
     

}


int main(){

    //vector<int> v = {10,1,2,7,6,1,5};
    vector<int> v = {1,1,1,2,2};

    int targetsum = 2;

    vector<int> ans;
    sort(v.begin(),v.end());
    subsequence(0,v,ans,targetsum);
    
}