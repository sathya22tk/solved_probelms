//sort colors
#include<bits/stdc++.h>
using namespace std;

/*brute
void sort_colors(vector<int>& v){
	sort(v.begin(),v.end());

}

//better
void sort_colors(vector<int>& v){
	int a = 0,b = 0,c = 0,i;
	int n = v.size();

	for(i = 0;i < n;i++){
		if(v[i] == 0)
			a++;
		else if(v[i] == 1)
			b++;
		else
			c++;
	}

	//cout<<"\n"<<a+b+c<<" "<<n;
	for(i = 0;i < a;i++)
		v[i] = 0;

	for(;i < a+b;i++)
		v[i] = 1;

	for(;i < a+b+c;i++)
		v[i] = 2;
}*/

void sort_colors(vector<int>& v){
	int n = v.size();
	int l = 0,r = n-1,m = 0;

	while(m <= r){
		switch(v[m]){
			case 0:
				swap(v[m++],v[l++]);
				break;
			case 1:
				m++;
				break;
			case 2:
				swap(v[m],v[r--]);
				break;
		}
	}

}

void display(vector<int>& ans){

        for (auto it : ans)
            cout<<" "<<it;
}

int main(){
	vector<int> v = {1,1,1,2,1,2,0,1,2,1,0,0,2,1,0};

	cout<<"\nbefore: ";
	display(v);

	sort_colors(v);

	cout<<"\nafter: ";
	display(v);
}