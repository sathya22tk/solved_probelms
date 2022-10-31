//count ocuurences of annagram
#include<bits/stdc++.h>
using namespace std;

bool AreAnagrams(string s1,string s2){

	map<char,int> m;
	for(int i = 0;i < s1.length();i++)
		m[s1[i]]++;

	for(int i = 0;i < s2.length();i++)
		m[s2[i]]--;

	for(auto it = m.begin();it != m.end();it++){

		if(it -> second != 0)
			return false;
	}
	return true;
}



int CountAnagrams(string text,string word){

	int res = 0;

	

	//traverse a string lineraly & paralely checking for anagrams
	for(int i = 0;i < text.length() - word.length() + 1;i++){

		if(AreAnagrams(text.substr(i,word.length()),word))
			res++;
	}
	return res;

}

int main(){

	string text = "forxxorfxdofr";
	string word = "for";

	cout<<CountAnagrams(text,word);

}




