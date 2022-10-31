//print linearly from N to 1 using backtracking
#include <bits/stdc++.h>
using namespace std;
int f(int i,int n){
	if(i>n) return 1;
	else{
		//cout<<endl<<i;
		f(i+1,n);
		cout<<endl<<i;
	}
	
}
int main(){
	int n;
	cout << "enter some number: ";
	cin >> n;
	f(1,n);
}