 //print factorial of of n using functional recursion
#include <bits/stdc++.h>
using namespace std;
int f(int n){
	if(n==1) return 1; 
	return n*f(n-1);
	 
}
int main(){
	int n;
	cout << "enter some number: ";
	cin >> n;
	cout<<endl<<f(n);
}