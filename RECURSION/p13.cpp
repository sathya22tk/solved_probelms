//print all subsequence whose sum is k
#include<bits/stdc++.h>
using namespace std;

void display(vector<int>& ans){
    cout<<"\n";
    if(ans.size() == 0) cout<<"{ }";
    for(auto it : ans)
        cout<< it<<" ";
}


void subsequence(int index,vector<int>& v,vector<int>& ans,int cursum,int targetsum){

    if(cursum > targetsum) return;
    if(index >= v.size()){
        if(cursum == targetsum)
            display(ans);
        return;
    }

    //pick
    ans.emplace_back(v[index]);
    cursum += v[index];
    subsequence(index+1,v,ans,cursum,targetsum);

    ans.pop_back();
    cursum -= v[index];

    //not pick
    subsequence(index+1,v,ans,cursum,targetsum);
}


int main(){

    vector<int> v = {3,1,2,6};
    vector<int> ans;
    int targetsum = 3;
    subsequence(0,v,ans,0,targetsum);
    
}