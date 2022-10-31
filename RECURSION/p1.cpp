//print name n times using recursion
#include <bits/stdc++.h>
using namespace std;
int f(int i,int n){
	if(i>=n) return 1;
	else{
		cout<<"sathya"<<endl;
		f(i+1,n);
	}
	
}
int main(){
	int n;
	cout << "enter no of times name to be printed: ";
	cin >> n;
	f(0,n);
}