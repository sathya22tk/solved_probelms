//print no of common number b/w 2 arrays of different size
// tc: O(N^2),  sc O(1)(bruteforce approch)
#include<bits/stdc++.h>
using namespace std;

int common(int a[],int b[],int n,int m){
    int count = 0;

    for(int i = 0;i < n;i++){
      for(int j = 0;j < m;j++){
        if(a[i] == b[j])
          count++;
      } 
    }
    return count;
}

int main(){
    int a[] = {3,4,5,6,7};
    int b[] = {1,2,3,4,5,6};
    int ans;

    ans = common(a,b,sizeof(a)/sizeof(a[0]),sizeof(b)/sizeof(b[0]));

    cout<<ans<<" common numbers";

}
