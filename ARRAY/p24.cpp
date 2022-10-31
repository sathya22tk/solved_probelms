//
#include<bits/stdc++.h>
using namespace std;

struct item{
	int value;
	int weight;
};
class solution{
public:

	bool static cmp(item a,item b){
		
		double r1 = (double)a.value/(double)a.weight;
		double r2 = (double)b.value/(double)b.weight;
		return r1 > r2;
	}


	double knapsack(item *v,int n,int w){
		
		sort(v,v+n,cmp);
		int i = 0;
		double curv = 0.0;
		int curw = 0;

		while(i < n){
			int remin = w - curw;
			if(v[i].weight <= remin){
				curw += v[i].weight;
				curv += v[i].value;
			}
			else{
				curv += (v[i].value/(double)v[i].weight) * (double)remin;
				break;
			}
			i++;
		}
		return curv;
	}
};


int main(){
	item v[] = {{100,20},{60,10},{120,30}};

	solution obj;

	double ans = obj.knapsack(v,3,50);
	cout <<"\nmaxvalue = " <<setprecision(2)<<fixed<<ans;;
}