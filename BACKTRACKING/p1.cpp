//print linearly from 1 to n using backtracking

#include <bits/stdc++.h>
using namespace std;
int f(int n){
	if(n<=0) return 1;
	else{
		f(n-1);
		cout<<endl<<n;

	}
	
}
int main(){
	int n;
	cout << "enter some number: ";
	cin >> n;
	f(n);
}