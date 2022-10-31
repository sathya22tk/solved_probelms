//count all subsequence whose sum is k
#include<bits/stdc++.h>
using namespace std;

void display(vector<int>& ans){
    cout<<"\n";
    if(ans.size() == 0) cout<<"{ }";
    for(auto it : ans)
        cout<< it<<" ";
}


int subsequence(int index,vector<int>& v,int cursum,int targetsum){

    //strictly done if only array contain positive elements
    if(cursum > targetsum) return 0;
    if(index >= v.size()){
        if(cursum == targetsum)
            return 1;
        return 0;
    }

    //pick
    cursum += v[index];
    int l = subsequence(index+1,v,cursum,targetsum);

    cursum -= v[index];

    //not pick
    int r = subsequence(index+1,v,cursum,targetsum);

    return l+r;
}


int main(){

    vector<int> v = {1,2,1};

    int targetsum = 2;

    cout<<"\ncount = "<<subsequence(0,v,0,targetsum);
    
}