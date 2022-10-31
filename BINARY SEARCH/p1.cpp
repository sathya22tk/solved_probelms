//implementing binary search iteratively.
#include<bits/stdc++.h>
using namespace std;
int search(int a[],int low,int high,int key){
	int mid;

	while(low <= high){
		mid = low +(high-low) / 2;

		if(a[mid] == key) return mid;	

		if(key < a[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}

	return -1;
}
int main(){
  int a[] = { 8,8,8,8,8,8,8,8};
  int key,ans,len;
  cout <<"enter the number u want to serch: ";
  cin >> key;
  //len = sizeof(a)/sizeof(a[0]) - 1;
  ans = search(a,0,sizeof(a)/sizeof(a[0]) - 1,key);
  (ans == -1)
       ? cout <<"\ngiven element is not in the list: "
       : cout << "\ngiven num is at index " << ans;
}
