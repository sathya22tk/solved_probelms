//print sum of n numbers using functional recursion
#include <bits/stdc++.h>
using namespace std;
int f(int n){
	if(n<1) return 0;
	return n + f(n-1);
}
int main(){
	int n;
	cout << "enter some number: ";
	cin >> n;
	cout<<f(n);
}