//print sum of n numbers using parametrized recursion
#include <bits/stdc++.h>
using namespace std;
int f(int i,int sum){
	if(i<1){
		cout<<endl<<"sum = "<<sum;
		return 0;
	} 
	else{
		f(i-1,sum+i);
	}
	
}
int main(){
	int n;
	cout << "enter some number: ";
	cin >> n;
	f(n,0);
}