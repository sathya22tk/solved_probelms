//
#include<bits/stdc++.h>
using namespace std;

class solution{
public:

	string kthpermutation(int n,int k){

		string ans = "";
		vector<int> num;
		k = k - 1;
		int fact = 1;

		//finding n-1 permutations becoz 1 + [2,3,4]
		for(int i = 1;i <n;i++){
			fact *= i;
			num.emplace_back(i);
		}
		num.emplace_back(n);

		while(1){
			ans = ans + to_string(num[k/fact]);
			num.erase(num.begin() + (k/fact));

			if(num.size() == 0)
				break;

			k = k % fact;
			fact = fact / num.size();
		}
		return ans;
	}
};

int main(){

	solution obj;
	int n = 4;
	int k = 17;
	string s = obj.kthpermutation(n,k);
	cout<<k<<"th permutation is "<<s;
}