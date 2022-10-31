//print any one subsequence whose sum is k
#include<bits/stdc++.h>
using namespace std;

void display(vector<int>& ans){
    cout<<"\n";
    if(ans.size() == 0) cout<<"{ }";
    for(auto it : ans)
        cout<< it<<" ";
}


bool subsequence(int index,vector<int>& v,vector<int>& ans,int cursum,int targetsum){

    if(cursum > targetsum) return 0;
    if(index >= v.size()){
        if(cursum == targetsum){
            display(ans);
            return 1;
        }
        return 0;
    }

    //pick
    ans.emplace_back(v[index]);
    cursum += v[index];
   if(subsequence(index+1,v,ans,cursum,targetsum))
        return 1;

    ans.pop_back();
    cursum -= v[index];

    //not pick
    if(subsequence(index+1,v,ans,cursum,targetsum))
        return 1;

    return 0;
}


int main(){

    vector<int> v = {1,2,1};
    vector<int> ans;
    int targetsum = 2;
    int s = subsequence(0,v,ans,0,targetsum);
    
}