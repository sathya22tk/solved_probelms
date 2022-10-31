//print 1st -ve number from every window of size d
//using deque 
#include<bits/stdc++.h>
using namespace std;

void FirstNegativeOfWindow(int *a,int n,int d){
	deque<int> di;
	int i;
	//manual step for 1st window
	for(i = 0;i < d;i++){
		if(a[i] < 0)
			di.push_back(i);
	}

	//now manual step is ready.apply SW for rest of window

	for(;i < n;i++){
		
		if(!(di.empty()))
			cout<<a[di.front()]<<" ";
		else
			cout << "0 ";

		//SW : remove at front & add at back of deque
		while(!(di.empty()) && di.front() == i - d )
			di.pop_front();

		if(a[i] < 0)
			di.push_back(i);

	}

	//print ans of last subarray
	if(!(di.empty()))
			cout<<a[di.front()]<<" ";
		else
			cout << "0 ";
}

int main(){
		
	int a[] = {12,-1,-7,8,-15,30,16,28},d;
	int n = sizeof(a)/sizeof(a[0]);
	cout<<"\nenter the d: ";
	cin >> d;
	FirstNegativeOfWindow(a,n,d);
}




