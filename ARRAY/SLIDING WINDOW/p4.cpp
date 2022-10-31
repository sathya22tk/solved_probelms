//print 1st -ve number from every window of size d
//using common sense 
#include<bits/stdc++.h>
using namespace std;

void FirstNegativeOfWindow(int *a,int n,int d){
	int FirstNegativeIndex = 0;
	int FirstNegativeElement = 0;
	//i = d-1 is a last index of current window
	for(int i = d - 1;i < n;i++){

		//FNI should be < last index of current window &&
		//FNI should be == first index of current window ||
		//a[FNI] >= 0
		//if above condition is true then current FNI is not 
		// a 1st -ve number,so we increment it
		while(FirstNegativeIndex < i &&
			 (FirstNegativeIndex == i-d || 
			 	a[FirstNegativeIndex] >= 0)){

			 	FirstNegativeIndex++;
			 }

		if(a[FirstNegativeIndex] < 0)
			FirstNegativeElement = a[FirstNegativeIndex];
		else
			FirstNegativeElement = 0;
			

		cout<<FirstNegativeElement<<" ";
	}
}

int main(){
		
	int a[] = {12,-1,-7,8,-15,30,16,28},d;
	int n = sizeof(a)/sizeof(a[0]);
	cout<<"\nenter the d: ";
	cin >> d;
	FirstNegativeOfWindow(a,n,d);
}




