/*list the maximum of each subarray of size d
	tc : O(n) + O(n) = O(n)
		O(n) is for traversal
		O(n) is for pop out n elements(while loop)

	sc : O(d) ; d is size of deque*/
#include<bits/stdc++.h>
using namespace std;


class solution{ 
	public:
		vector<int> MaxSubArray(vector<int>& a,int d){
			int n = a.size();
			vector<int> res;

			//here deque is atmost size of window
			deque<int> di;
				for(int i = 0;i < n;i++){
					
					//to remove out of bound index
					if(!di.empty() && di.front() == i-d)
						di.pop_front();


					//we r pop out totally n elements,so this loop will run for n times
					//for maintaning decreasing order
					while(!di.empty() && a[i] >= a[di.back()])
						di.pop_back();

				
				
					di.push_back(i);
					if(i >= d-1)
						res.emplace_back(a[di.front()]);
				}
				return res;
		}
};

int main(){

	solution obj;
	vector<int> v  {7,2,4};
	vector<int> res = obj.MaxSubArray(v,2);

	for(auto it:res)
		cout << it <<" ";

	return 0;	
}




