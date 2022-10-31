//find given two strinngs are anagram or not


/*anagram of a word should has 3 characteristic
	1. both should have equal no of charcters
	2. both have equal no of occurences of charcters
	3. order may or may not change
	4. should be consecutive*/     
#include<bits/stdc++.h>
using namespace std;
int FindAnagram(string str1,string str2){

	int sl1 = str1.length();
	int sl2 = str1.length();

	if(sl1 != sl2)
		return 0;

	//sort both string

	sort(str1.begin(),str1.end());
	sort(str1.begin(),str1.end());
	cout<<str1<<endl;
	cout<<str2<<endl;

	for(int i = 0;i < sl1;i++){
		if(str1[i] != str2[i])
			return 0;
	}
	return 1;


}

int main(){
		
		string str1 = "abcd";
		string str2 = "dabc";

		if(FindAnagram(str1,str2))
			cout<<"\nYes anagram";
		else
			cout<<"\nNot a anagram";
}




