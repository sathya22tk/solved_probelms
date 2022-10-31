//input = wednesday...output = 4
//function should return the ex: 1st day of week is sunday
//so it should return 1 if input is sunday
#include<bits/stdc++.h>
using namespace std;
//by deafult sunday = 0 and so on
enum week {sunday,monday,tuesday,wednesday,thursday,friday,saturday};
int main(){

	week today;
	today = friday;
	cout << "day "<<today+1;
}
