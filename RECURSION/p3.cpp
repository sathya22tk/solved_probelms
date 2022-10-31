//print linearly from n to 1 using recursion

#include <bits/stdc++.h>
using namespace std;
int f(int n){
	if(n<=0) return 1;
	else{
		//cout<<endl<<n;
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