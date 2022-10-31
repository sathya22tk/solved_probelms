//
#include<bits/stdc++.h>
using namespace std;
void display(vector<int>& v){
	cout<<"\n";
	for(auto it : v)
		cout<<it<<" ";
}

void duplicates(vector<int>& v){
	int i = 1,j = 1;
	int n = v.size();
	while(v[j] == v[0]) j++;

	while(j < n){
		v[i] = v[j];
		while(v[j] == v[i]) j++;

		i++;
	}
	cout<<"\n\n length = "<<i<<"\n\n";
}



int main(){
	vector<int> v = {0,0,1,1,1,2,2,3,3,4};
	//vector<int> v = {1,1,2};
	cout<<"\noriginal array: ";
	display(v);

	duplicates(v);

	cout<<"\nwithout duplicates: ";
	display(v);
}