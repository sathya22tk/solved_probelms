//subet sum(1st version)
#include<bits/stdc++.h>
using namespace std;

void display(vector<int>& ans){
    cout<<"\n";
    if(ans.size() == 0) cout<<"{ }";
    for(auto it : ans)
        cout<< it<<" ";
}


void subsequence(int index,vector<int>& v,vector<int>& ans,int cursum){


    if(index >= v.size()){
        ans.emplace_back(cursum);
        return;
    }

    //pick
    subsequence(index+1,v,ans,cursum + v[index]);

    //not pick
    subsequence(index+1,v,ans,cursum);
}
void help(vector<int>& v){

    vector<int> ans;

    subsequence(0,v,ans,0);
    sort(ans.begin(),ans.end());
    display(ans);


}


int main(){

    //vector<int> v = {3,1,2};
    vector<int> v = {1,2,2};

    
    help(v);
    
    
}