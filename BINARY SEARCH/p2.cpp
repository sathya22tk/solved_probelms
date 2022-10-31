//implementing binary search recusively.
#include<bits/stdc++.h>
using namespace std;
int search(int a[],int l,int r,int key){

	if(l <= r) {
		int m = l+(r-l)/2;

	if(a[m] == key) return m;

	if(key < a[m])
		return search(a,l,m-1,key);
  else
	   return search(a,m+1,r,key);
	}
	return -1;
}
int main(){
  int a[] = { 34,35,48,54,100,450,986,4500};
  int key,ans,len;
  cout <<"enter the number u want to serch: ";
  cin >> key;
  //len = sizeof(a)/sizeof(a[0]) - 1;
  ans = search(a,0,sizeof(a)/sizeof(a[0]) - 1,key);
  (ans == -1)
       ? cout <<"\ngiven element is not in the list: "
       : cout << "\ngiven num is at index " << ans;
}
