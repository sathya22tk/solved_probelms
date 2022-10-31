//create fraction data type using struct
#include<bits/stdc++.h>
using namespace std;
struct fraction{
	int nume;
	int deno;
};
int main(){
	fraction f1 = { 3, 2}, f2 = {3, 2};
	int ans = (f1.nume * f2.deno) - (f1.deno * f2.nume);
	ans > 0 ? cout <<"\nf1 is big":cout<<"\nf2 is big"; 

}
