//find 1st and last occurence of given number in sorted array
#include<bits/stdc++.h>
using namespace std;

vector<int> FL_Ocurrence(int a[],int n,int target){

	int first = -1,last = -1;
	vector<int> v;

	for(int i = 0;i < n;i++){

		if(target != a[i])
			continue;

		if(first == -1)
			first = i;

		last = i;
	}
	v.emplace_back(first);
	v.emplace_back(last);
	return v;

}

int main(){
	int a[] = {12,34,56,78,78,78,78,98,98,98,102,103,111,111};
	int target;
	vector<int> ans;

	cout<<"\nenter the num : ";
	cin >> target;

	ans = FL_Ocurrence(a,sizeof(a)/sizeof(a[0]),target);

	cout << endl;
	for(auto it:ans)
		cout <<" "<<it<<" ";
}
