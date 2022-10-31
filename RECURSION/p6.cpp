//print factorial of of n using parameterized recursion
#include <bits/stdc++.h>
using namespace std;
int f(int i,int fact){
	if(i==1){
		cout<<endl<<"factorial = "<<fact;
	    return 1;
	}
	f(i-1,fact*i);
	 
}
int main(){
	int n;
	cout << "enter some number: ";
	cin >> n;
	f(n,1);
}