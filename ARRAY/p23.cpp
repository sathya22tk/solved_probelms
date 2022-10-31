//
#include<bits/stdc++.h>
using namespace std;

struct job{
	int id;
	int deadline;
	int profit;
};
class solution{
public:

	bool static cmp(job a,job b){
		return (a.profit > b.profit);
	}


	vector<int> jobsequence(job *v,int n){
		int i,j;
		int maxprofit = 0;
		int maxdeadline = 0;
		int jobdone = 0;

		sort(v,v+n,cmp);

		maxdeadline = v[0].deadline;
		i = 1;
		while(i < n){
			maxdeadline = max(maxdeadline,v[i].deadline);
			i++;
		}

		vector<int> ans(maxdeadline+1,-1);

		for(i = 0;i < maxdeadline;i++){

			j = v[i].deadline;

			while(ans[j] != -1 && j >= 0) j--;

			ans[j] = v[i].id;
			maxprofit += v[i].profit;
			jobdone++;
		}
		cout<<"\nmaxprofit = "<<maxprofit<<"\njob done = "<<jobdone;
		return ans;

	}
};

void display(vector<int>& ans){
	cout<<"\n";
	for(int i = 1;i < ans.size();i++)
		cout<<ans[i]<<" ";
}
int main(){
	job v[] = {{1,4,20},{2,5,60},{3,6,70},
			{4,6,65},{5,4,25},{6,2,80},
			{7,2,10},{8,2,22}};

	solution obj;

	vector<int> ans = obj.jobsequence(v,8);
	display(ans);
}