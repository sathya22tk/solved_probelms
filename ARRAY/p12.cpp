#include<bits/stdc++.h>
using namespace std;

/*int maxsub(vector<int>& v){
	int i,j,csum = INT_MIN,sum = 0;
	int n = v.size();

	for(i = 0;i < n;i++){
		sum = 0;
		for(j = i;j < n;j++){
			sum += v[j];
			csum = max(csum,sum);
		}
	}
	return csum;
}*/

int maxsub(vector<int>& v){
	int i,csum = INT_MIN,sum = 0;
	int n = v.size();

	for(i = 0;i < n;i++){

		sum += v[i];
		if(sum < 0)
			sum = 0;
		csum = max(csum,sum);
	}
	return csum;
}


int main(){
	vector<int> ans;
	vector<int> v = {-2,1,-3,4,-1,2,1,-5,4};
	cout<<"\nsum: "<<maxsub(v);
	
}