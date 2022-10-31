//print linearly from 1 to n using recursion 
#include <bits/stdc++.h>
using namespace std;
int f(int i,int n){
	if(i>n) return 1;
	else{
		cout<<endl<<i;
		f(i+1,n);
	}
	
}
int main(){
	int n;
	cout << "enter some number: ";
	cin >> n;
	f(1,n);
}