//program to demonstrate that enum variable take only one 
//value out of other possible values in enum declaration
#include<bits/stdc++.h>
using namespace std;
enum suit { king,queen,joker};
int main(){
	suit deck = king;
	cout << "size of suit is " << sizeof(suit);
	cout << "\nsize of deck is " << sizeof(deck);
	
}
