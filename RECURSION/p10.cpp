//check a string is palindrome using recursion
#include<bits/stdc++.h>
using namespace std;



bool checkpalin(string& s,int i){

    int n = s.length();
    if(i >= n/2)
        return 1;

    if(s[i] != s[n-i-1])
        return 0;

    return checkpalin(s,i+1);

    
}

int main(){

    string s = "abab";

    cout<<"\npalindrome : \n"<<checkpalin(s,0);
}