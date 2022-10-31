//explain about pairs
#include<bits/stdc++.h>
using namespace std;

int main(){
	pair<int,int> s = {1,2};
	cout << s.first<<" "<<s.second<<endl;

	pair<int,pair<int,int>> p1 = {1,{2,3}};
	cout << p1.first<<" "<<p1.second.first<<" "
						<<p1.second.second<<endl;

	pair<int,int> p[] = {{1,2},{3,4},{5,6}};
	//Asusual index starts with 0

	cout << p[0].second<<" "<<p[2].first<<endl;
}
