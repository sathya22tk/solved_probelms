#include<bits/stdc++.h>
using namespace std;


void next_permutation(vector<int>& v){
	int k,l;
	int n = v.size();

	for(k = n-2;k >= 0;k--){
		if(v[k] < v[k+1])
			break;
	}

	if(k <= 0)
		reverse(v.begin(),v.end());
	else{
		for(l = n-1;l >=0; l--){
			if(v[l] > v[k])
				break;
		}
		swap(v[l],v[k]);
		reverse(v.begin()+k+1,v.end());
	}
	return;

}
void display(vector<int>& ans){

        for (auto it : ans)
            cout<<" "<<it;
}

int main(){
	vector<int> v = {1,2,3,5,4};

	cout<<"\nbefore: ";
	display(v);

	next_permutation(v);

	cout<<"\nafter: ";
	display(v);
}