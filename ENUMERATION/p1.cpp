//Defining enumeration
#include<bits/stdc++.h>
using namespace std;
//defining enum Gender(where Gender is a user defined data dype)
enum Gender {male,female};
int main(){
	//declaring & assigning a Gender type variable
	Gender gen = male;

	switch(gen){
		case male: 
			cout <<"gender is male:";
			break;
		case female:
			cout <<"gender is female:";
			break;
		default :
			cout <<"invalid input type";
	}
	
}
