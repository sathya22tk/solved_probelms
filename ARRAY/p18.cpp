//
#include<bits/stdc++.h>
using namespace std;

/*//brute
int water(vector<int>& v){
	int i,j,n = v.size();
	int watertrapped = 0;

	for(i = 0;i < n;i++){
		j = i;
		int leftmax = 0,rightmax = 0;
		while(j >= 0){
			leftmax = max(v[j],leftmax);
			j--;
		}

		j = i;
		while(j < n){
			rightmax = max(v[j],rightmax);
			j++;
		}

		watertrapped += (min(leftmax,rightmax) - v[i]);
	}
	return watertrapped;
}*/

void display(vector<int>& v){
	for(auto it : v)
		cout<<it<<" ";
}


/*//better
int water(vector<int>& v){
	int i,j,n = v.size();
	int watertrapped = 0;
	vector<int> prefix(n,0);
	vector<int> suffix(n,0);
	int leftmax = 0,rightmax = 0;

	for(i = 0;i < n;i++){
		if(v[i] > leftmax){
			prefix[i] = v[i];
			leftmax = v[i];
		}
		else
			prefix[i] = leftmax;

	}

	for(i = n-1;i >= 0 ;i--){
		if(v[i] > rightmax){
			suffix[i] = v[i];
			rightmax = v[i];
		}
		else
			suffix[i] = rightmax;
	}

	for(i = 0;i < n;i++){
		watertrapped += (min(prefix[i],suffix[i]) - v[i]);
	}

	return watertrapped;
}*/


//optimal
int water(vector<int>& v){
	int n = v.size();
	int watertrapped = 0;
	int leftmax = 0,rightmax = 0;
	int low = 0,high = n-1;

	while(low < high){
		if(v[low] <= v[high]){
			if(v[low] > leftmax) leftmax = v[low];
			else watertrapped += leftmax - v[low];

			low++;
		}
		else{
			if(v[high] > rightmax) rightmax = v[high];
			else watertrapped += rightmax - v[high];

			high--;
		}
	}
	return watertrapped;
}




int main(){
	vector<int> v = {0,1,0,2,1,0,1,3,2,1,2,1};
	cout<<"\nwater trapped = "<<water(v);


}