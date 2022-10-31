//printing the value of enum
#include<bits/stdc++.h>
using namespace std;
enum season {winter = 5,summer = 56,rainy = 9};
int main(){
	season s1;
	s1 = summer;
	cout << s1 <<" "<< s1+1;
	s1 = winter;
	cout <<"\n" << s1 <<" "<< s1+1;
}
