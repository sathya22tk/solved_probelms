//list next greater element
#include<bits/stdc++.h>
using namespace std;

class solution{ 
	public:
		vector<int> NGE(vector<int>& a){
			int n = a.size();
			vector<int> nge(n,-1);
			stack<int> st;
				for(int i = 2*n-1;i >= 0;i--){
		
					while(!st.empty() && st.top() <= a[i%n])
						st.pop();

					if(i < n){
						if(!st.empty())
							nge[i] = st.top();
					}
					

					st.push(a[i%n]);
				}
				return nge;
		}
};

int main(){
	solution obj;
	vector<int> v  {4,12,5,3};
	vector<int> res = obj.NGE(v);
	
	for (int i = 0; i < res.size(); i++) {
    cout << res[i] << " ";
  }

	return 0;	

}




